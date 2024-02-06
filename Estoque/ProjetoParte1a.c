#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//#include <Windows.h>

struct Produto{
    int codigo;
    char titulo[50];//depois alocar
    int unidade;
    float preco;
    int quant_estoque;
    int vendas;

};

struct Codigo{
    int cod;
};

void inclui(struct Codigo *codigoPonteiro) {
    
    char string[50];
    struct Produto *prod;

    FILE *arq = fopen("PRODUTOSNOVOS.txt", "a+");//acrescenta os novos produtos
    if (arq == NULL) {
        printf("Arquivo nao pode ser aberto");
        return;
    }
    

    prod = (struct Produto *)malloc(sizeof(struct Produto));
    if(prod==NULL){
        exit(1);
    }

    //testando setar o código para inicar com 1
    prod->codigo = 1;
    codigoPonteiro->cod+=1; 

    FILE *codArq = fopen("codigo.txt", "a+");
    if(codArq != NULL){
        fprintf(codArq, "%d\n", codigoPonteiro->cod);
        fclose(codArq);
    }
    

   // prod->codigo = codigoPonteiro->cod;

    fflush(stdin);
    getchar();

    printf("Informe titulo:\n");
    fflush(stdin);
    //scanf("%s", string);
    gets(string);

    //fgets(string, sizeof(string) , stdin);
    strcpy(prod->titulo, string);
    strcpy(prod->codigo, codigoPonteiro->cod);

//    string[strcspn(string, "\n")] = '\0'; // Remove a quebra de linha do fgets
//    strncpy(produto->titulo, string, sizeof(produto->titulo) - 1);
//    produto->titulo[sizeof(produto->titulo) - 1] = '\0'; // Garante a termina��o da string

    //prod->unidade = 1; apagar
    prod->vendas = 0;

    printf("Informe preco:\n");
    scanf("%f", &prod->preco);

    printf("Informe quantidade em estoque:\n");
    scanf("%d", &prod->quant_estoque);

    fwrite(prod, sizeof(struct Produto), 1, arq);//escreve o registro por completo no arquivo

    free(prod);
    fclose(arq);
}

void alteraExclui(){
    FILE *arq;
    int cod;
    char ch;
    char string[50];
    struct Produto *prod;

    arq = fopen("PRODUTOSNOVOS.txt", "r+");//ler e escreve um arquivo j� existente
    if(arq == NULL){
        printf("Arquivo nao pode ser aberto.\n");
        return;
    }


    printf("Informe codigo do produto: \n");
    fflush(stdin);
    scanf("%d", &cod);

    printf("Vai (A)lterar ou (E)xcluir: \n");

    // Limpa o buffer do teclado
    while (getchar() != '\n');

    // Recebe a entrada do usuário
    scanf("%c", &ch);
    //printf("Erro"); apagar


    fseek(arq, (cod - 1) * sizeof(struct Produto), SEEK_SET);//reposiciona ponteiro no arquivo
    switch(ch){
        case 'A':
            printf("Informe titulo: ");
            fflush(stdin);
            getchar();
            gets(string);

            prod = (struct Produto *)malloc(sizeof(struct Produto));
            prod[cod - 1].codigo = cod;


            strcpy(prod[cod - 1].titulo, string);

            printf("Informe preco: ");
            scanf("%f", &prod[cod - 1].preco);

            printf("Informe quantidade em estoque:\n");
            scanf("%d", &prod[cod - 1].quant_estoque);

            fwrite(&prod[cod - 1], sizeof(struct Produto), 1, arq);//subescreve a posiÇÃo anterior
            free(prod);
            break;

        case 'E':

             // Determinar quantos produtos existem no arquivo
            fseek(arq, 0, SEEK_END); // Posicionar no final do arquivo
            long tamanhoArquivo = ftell(arq); // Obter o tamanho do arquivo

                                                    //vai pegar a quantidade de bytes
            int quantProdutos = tamanhoArquivo / sizeof(struct Produto); // Calcular a quantidade de produtos
            //rewind(arq); // Voltar para o in�cio do arquivo

            // Alocação dinâmica de memória para os produtos
            prod = (struct Produto *)malloc((quantProdutos - cod)* sizeof(struct Produto));
            if (prod == NULL) {
                printf("Erro na alocacao de memoria\n");
                fclose(arq);
                return;
            }

            fseek(arq, cod * sizeof(struct Produto), SEEK_SET);

            // Lendo os produtos do arquivo para a mem�ria alocada dinamicamente
            //mostra toda a estrutura no terminal
            fread(prod, sizeof(struct Produto), quantProdutos - cod, arq);



            //talvez o problema da incrementação do cod do produto esteja aqui 
            for (int i = cod - 1; i < quantProdutos - cod; i++) {
                prod->codigo = cod - 1;
            }


            fseek(arq, (cod - 1) * sizeof(struct Produto), SEEK_SET);
            fwrite(prod, sizeof(struct Produto), quantProdutos, arq);

            fseek(arq, (quantProdutos - 1) * sizeof(struct Produto), SEEK_SET);
            ftruncate(fileno(arq), tamanhoArquivo);

            free(prod);
            break;


    }

    fclose(arq);


}

void venda(){
    FILE *arq;
    int cod;
    int vendas;
    struct Produto *prod;

    arq = fopen("PRODUTOSNOVOS.txt", "r+");//ler e modifica um arquivo j� existente
    if(arq == NULL){
        printf("Arquivo nao pode ser aberto.\n");
        return;
    }

    prod = (struct Produto *)malloc(sizeof(struct Produto));
    if(prod==NULL){
        exit(1);
    }


    fflush(stdin);
    printf("Informe o código do produto: \n");
    scanf("%d", &cod);

    fseek(arq, (cod - 1) * sizeof(struct Produto), SEEK_SET);//reposiciona ponteiro

    printf("Informe quantidade vendida: \n");
    scanf("%d", &vendas);



    fread(&prod[cod - 1], sizeof(struct Produto), 1, arq);

    prod[cod - 1].vendas += vendas;
    prod[cod - 1].quant_estoque -= vendas;//LINHA PRINCIPAL


    fseek(arq, (cod - 1) * sizeof(struct Produto), SEEK_SET);//reposiciona ponteiro
    fwrite(&prod[cod - 1], sizeof(struct Produto), 1, arq);//subescreve a posi��o anterior

    free(prod);
    fclose(arq);

}

void geraListagem() {
    FILE *arq;
    struct Produto *prod = NULL; // Ponteiro para alocar dinamicamente
    int quantProdutos = 0;

    arq = fopen("PRODUTOSNOVOS.txt", "r");
    if (arq == NULL) {
        printf("Arquivo nao pode ser aberto\n");
        return;
    }

    // Determinar quantos produtos existem no arquivo
    fseek(arq, 0, SEEK_END); // Posicionar no final do arquivo
    long fileSize = ftell(arq); // Obter o tamanho do arquivo
    quantProdutos = fileSize / sizeof(struct Produto); // Calcular a quantidade de produtos
    rewind(arq); // Voltar para o in�cio do arquivo

    if (quantProdutos <= 0) {
        printf("Nenhum produto encontrado\n");
        fclose(arq);
        return;
    }

    // Aloca��o din�mica de mem�ria para os produtos
    prod = (struct Produto *)malloc(quantProdutos * sizeof(struct Produto));
    if (prod == NULL) {
        printf("Erro na alocacao de memoria\n");
        fclose(arq);
        return;
    }

    // Lendo os produtos do arquivo para a mem�ria alocada dinamicamente
    fread(prod, sizeof(struct Produto), quantProdutos, arq);
    fclose(arq);
    
  //testando para remover
    FILE *arqNovo = fopen("PRODUTOSNOVOS1.txt", "w");
    arq = fopen("PRODUTOSNOVOS.txt", "r");

    if(arq == NULL || arqNovo == NULL){
      printf("Erro ao abrir os arquivos.\n");
      return;
    }
    char linha[1000];
    while (fgets(linha, sizeof(linha), arq) != NULL) {
      // Verificar se a linha não é vazia (contém pelo menos um caractere não branco)
      int i = 0;
      while (linha[i] != '\0') {
          if (linha[i] != ' ' && linha[i] != '\t' && linha[i] != '\n' && linha[i] != '\r') {
              // A linha não é vazia, copiar para o arquivo novo
              fprintf(arq, "%s", linha);
              break;
          }
      }
    }
      fclose(arq);
      fclose(arqNovo);
    
    printf("Listagem de Produtos:\n");
    for (int i = 0; i < quantProdutos; i++) {
      if(prod[i].quant_estoque > 0){    
        printf("Produto %d:\n", i + 1);
        printf("Codigo: %d\n", prod[i].codigo);
        printf("Titulo: %s\n", prod[i].titulo);
        printf("Preco: %.2f\n", prod[i].preco);
        printf("Quantidade em estoque: %d\n", prod[i].quant_estoque);
      }
      if(prod[i+1].quant_estoque == 0){
        prod[i].codigo = 0;
        
      }
      
    }

    // Liberar a mem�ria alocada dinamicamente
    free(prod);
}

void consulta(){
    FILE *arq;
    struct Produto *prod;
    int quantProdutos;
    char titulo[50];

    arq = fopen("PRODUTOSNOVOS.txt", "r");
    if (arq == NULL) {
        printf("Arquivo nao pode ser aberto\n");
        return;
    }
     // Determinar quantos produtos existem no arquivo
    fseek(arq, 0, SEEK_END); // Posicionar no final do arquivo
    long fileSize = ftell(arq); // Obter o tamanho do arquivo
    quantProdutos = fileSize / sizeof(struct Produto); // Calcular a quantidade de produtos
    rewind(arq); // Voltar para o in�cio do arquivo

    if (quantProdutos <= 0) {
        printf("Nenhum produto encontrado\n");
        fclose(arq);
        return;
    }

    prod = (struct Produto *)malloc(quantProdutos * sizeof(struct Produto));
    if (prod == NULL) {
        printf("Erro na alocacao de memoria\n");
        fclose(arq);
        return;
    }

    // Lendo os produtos do arquivo para a memória alocada dinamicamente
    fread(prod, sizeof(struct Produto), quantProdutos, arq);
    fclose(arq);


    printf("Informe titulo a ser procurado: ");
    fflush(stdin);
    gets(titulo);

    for (int i = 0; i < quantProdutos; i++) {
        if(!strcmp(titulo, prod[i].titulo)){//if invertido
            printf("Produto %d:\n", i + 1);
            printf("Codigo: %d\n", prod[i].codigo);
            printf("Titulo: %s\n", prod[i].titulo);
            printf("Preco: %.2f\n", prod[i].preco);
            printf("Quantidade em estoque: %d\n", prod[i].quant_estoque);
        }

    }

    free(prod);
    fclose(arq);

}


void apresenta(){
    FILE *arq;
    struct Produto *prod = NULL; // Ponteiro para alocar dinamicamente
    int quantProdutos = 0;

    arq = fopen("PRODUTOSNOVOS.txt", "r");
    if (arq == NULL) {
        printf("Arquivo nao pode ser aberto\n");
        return;
    }

    // Determinar quantos produtos existem no arquivo
    fseek(arq, 0, SEEK_END); // Posicionar no final do arquivo
    long fileSize = ftell(arq); // Obter o tamanho do arquivo
    quantProdutos = fileSize / sizeof(struct Produto); // Calcular a quantidade de produtos
    rewind(arq); // Voltar para o in�cio do arquivo

    if (quantProdutos <= 0) {
        printf("Nenhum produto encontrado\n");
        fclose(arq);
        return;
    }

    // Aloca��o din�mica de mem�ria para os produtos
    prod = (struct Produto *)malloc(quantProdutos * sizeof(struct Produto));
    if (prod == NULL) {
        printf("Erro na alocacao de memoria\n");
        fclose(arq);
        return;
    }

    // Lendo os produtos do arquivo para a mem�ria alocada dinamicamente
    fread(prod, sizeof(struct Produto), quantProdutos, arq);


//    int vetorVendas[10];
//    int vetorEstoque[10];

    struct Produto temp;

    for(int i = 0; i < quantProdutos; i++){
        for(int j = i + 1; j < quantProdutos; j++){
            if(prod[i].vendas <= prod[j].vendas){//ordena descrecente
                memcpy(&temp, &prod[j], sizeof(struct Produto));
                memcpy(&prod[j], &prod[i], sizeof(struct Produto));
                memcpy(&prod[i], &temp, sizeof(struct Produto));

            }
        }
    }

    int vai = (quantProdutos > 10) ? 10 : quantProdutos;
    printf("Os 10 produtos mais vendidos\n");
    for(int i = 0; i < vai; i++){
        printf("Produto %d:\n", i + 1);
        printf("Codigo: %d\n", prod[i].codigo);
        printf("Titulo: %s\n", prod[i].titulo);
        printf("Preco: %.2f\n", prod[i].preco);
        printf("Quantidade em estoque: %d\n", prod[i].quant_estoque);
    }


    //duplicado
    for(int i = 0; i < quantProdutos; i++){
        for(int j = i + 1; j < quantProdutos; j++){
            if(prod[i].quant_estoque <= prod[j].quant_estoque){//ordena descrecente
                memcpy(&temp, &prod[j], sizeof(struct Produto));
                memcpy(&prod[j], &prod[i], sizeof(struct Produto));
                memcpy(&prod[i], &temp, sizeof(struct Produto));

            }
        }
    }


    printf("Os 10 produtos com maior estoque\n");
    for(int i = 0; i < vai; i++){
        printf("Produto %d:\n", i + 1);
        printf("Codigo: %d\n", prod[i].codigo);
        printf("Titulo: %s\n", prod[i].titulo);
        printf("Preco: %.2f\n", prod[i].preco);
        printf("Quantidade em estoque: %d\n", prod[i].quant_estoque);
    }

    free(prod);
    fclose(arq);
    return;
}


int main(){
    struct Codigo codigo;
    int esc;


    codigo.cod = 0;
    FILE *codArq = fopen("codigo.txt", "r");
    if (codArq != NULL) {
        fscanf(codArq, "%d", &codigo.cod);
        fclose(codArq);
    }

    do{
//        Sleep(1000);
        system("cls");

        printf("Informe numero da opcao: \n");
        printf("1 - Incluir produtos\n");
        printf("2 - Alterar ou excluir produtos\n");
        printf("3 - Dar baixa de produtos\n");
        printf("4 - Gerar listagem de produtos\n");
        printf("5 - Procurar por titulo do produto\n");
        printf("6 - Apresentar os 10 mais vendidos e os 10 com mais estoques\n");
        printf("7 - Sair\n");
        

        scanf("%d", &esc);

        switch(esc){
            case 1:
                inclui(&codigo);
                break;
            case 2:
                alteraExclui();
                break;
            case 3:
                venda();
                break;
            case 4:
                geraListagem();
                break;
            case 5:
                consulta();
                break;
            case 6:
                apresenta();
                break;
            case 7:
                exit(0);

        }
    }while(esc >= 1 && esc <= 7);

//limpa o terminal plmds
        system("clear");
    return 0;
}
