# Arquivos em C

    Por que usar arquivos?
        Armazenamento de informações (persistência de dados)
        Acesso pode ser não sequencial e concorrente aos dados armazenados
    
    Tipos de Arquivos 
        Texto->
            Armazena caracteres que pode ser mostrados diretamente na tela ou modificados em um editor de textos.
            Cada caracter ocupa de 8 bits (1 byte).
        Binários->
            Armazena uma sequência de bits que está sujeita as convenções dos programas que o gerou (arquivos executáveis, compactos, etc).
            Dados gravados de acordo com o tipo.

## Manipulação de Arquivos em C
    Funções disponíveis na biblioteca <stdio.h>
    Funções para abrir/fechar/ler caracteres/bytes
        Não possui funções para ler automaticamente todas as informações de um arquivo.
            Programdor cria.
    
    Sempre que for usar arquivos em programas tem que declara um ponteiro de arquivo

        FILE *p;
            Onde "p" é o ponteiro que permitirá manipular arquivos em C.

        Abrindo um arquivo
            Função "fopen"
                FILE *fopen(char *nome_arquivo, char *modo);
                - nome_arquivo: Nome do arquivo a ser aberto.
                Exemplo: "teste.txt", "cadastro.bin".

                Pode-se usar caminhos absolutos (a partir da raiz - ex C:\\Projetos\\dados.txt) ou relativos (a partir do diretório corrente).

                O modo de abertura determina que tipo de uso será feito do arquivo (na pag.4 do slide tem os modos de abertura do arquivo);

                ------------Abrindo o arquivo teste.txt----------

                FILE *arq = fopen("teste.txt", "r");

                if(arq == NULL)
                    printf("Erro ao tentar abrir o arquivo teste.txt);
                else
                    printf("Arquivo aberto para leitura.\n");
                -------------------------------------------------
            
            Após abrir um arquivo é necessário fechá-lo com a função fclose; int fclose(FILE *p).

                A função retorna 0 em caso de sucesso e EOF(-1)caso contrário.

            Para gravação no arquivo deve-se usar a função fprintf; int printf(FILE *p, char *format, ...);
            Utiliza-se da função fprintf para escrever no arquivo.

                Exemplos:

                    #include <stdio.h>
                        int main(){
                            int inteiro = 10;
                            char palavra[10] = "Palavra";

                            //declaração e carregamento do arquivo
                            FILE *arquivo = fopen("file.txt", "w");

                            //gravando um inteiro e uma palavra no arquivo
                            fprint(arquivo, "%s - %d\n", palavra, inteiro);

                            //fechando (e salvando) o arquivo
                            fclose(arquivo);

                        }

            Para leitura deve-se usar a função: fscanf

                int fscanf(FILE *p, char *format, ...);

                Retorna o número de argumentos preenchidos ou EOF se o fim do arquivo for atingido.
            
                    EX:
                        FILE *arquivo = fopen("file.txt", "r");

                        //lendo um inteiro e um caractere separados por um espaço
                        int inteiro;
                        char caractere;
                        fscanf(arquivo, "%d %c", &inteiro, &caractere);

                        fclose(arquivo);
                

                Lendo todos os dados de um arquivo texto(usar larço)

                    EX:
                        char aux;
                        FILE *f = fopen ("teste.txt", "r");

                        while(fscanf(f, "%c", &aux)!= EOF)
                            printf("%c", aux);
                        
                        fclose(f).;
                    
            Leitura->
                fgets
                fgetc

            Gravaçãp->
                fputs
                fputc
            
            Teclado->
                arg c
                arg v
            
        EXERCÍCIOS:
        Criar/abrir um arquivo do tipo texto chamado “textosimples.txt” e:
            § Escrever no arquivo “Meu primeiro arquivo em C”
            § Mostrar no prompt a mensagem que foi escrita
            § Fechar o arquivo
            § Abrir o arquivo “textosimples.txt” no modo a+
            § Escrever no arquivo “inserindo nova mensagem”
            § Mostrar no prompt o conteúdo do arquivo
            § Solicitar do usuário uma palavra qualquer e escrever no arquivo
            § Mostrar no prompt o conteúdo do arquivo
            § Fechar o arquivo

### Material adicional

    - [Tutorial sobre como ler e gravar em um arquivo]http://www.ime.usp.br/~pf/alg

    http://linguagemc.com.br/arquivos-em-c-categoria-usando-arquivos/

    https://www.inf.pucrs.br/~pinho/LaproI/Arquivos/Arquivos.htm

    https://www.inf.ufpr.br/roberto/ci067/12_arquivos.html