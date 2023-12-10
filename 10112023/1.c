#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

        int main(){

        char phrases[100] = {"Meu primeiro arquivo em C"};

        FILE *arq;

        arq = fopen("textosimples.txt", "w");
        
        //A função fwrite escreve no arquivo criado, e retorna o número de itens escritos 
        /*fwrite(&phrases, 2, sizeof(phrases), arq);*/ 
        fprintf(arq, "%s\n", phrases);

        //abrindo arquivo para leitura
        arq = fopen("textosimples.txt", "r");
        if (arq == NULL){
                printf("\nErro na abertura do arquivo!");
                return 1;
        }

        //fechando e salvando arquivo
        fclose(arq);
        
        //abrindo novamente o arquivo
                                        //a, os dados vão ser adicionados no fim do arquivo
        arq = fopen("textosimples.txt", "a");

        char new_message[100] = {"Inserindo nova mensagem"};
        //fwrite(&arq, 2, sizeof(new_message), arq);
        fprintf(arq,"%s\n", new_message);

        arq = fopen("textosimples.txt", "r");

        fclose(arq);


        //A função rewind é usada para redefinir o indicador de posição do arquivo (file pointer) para o início do arquivo. Isso é útil quando você deseja ler novamente os dados de um arquivo, por exemplo.
        //rewind(arq);
        
        //abrindo o arquivo novamente para o usuário guardar algo nele.
        arq = fopen("textosimples.txt", "a");
        
        if (arq == NULL){
                printf("\nErro na abertura do arquivo!");
                return 1;
        }

        char user[50];

        printf("\nDigite uma palavra ou frase qualquer para gravar no arquivo: ");
        fgets(user, sizeof(user), stdin);


        //escrevendo a info do usuário no arquivo
        //fputs(user, arq);
        fprintf(arq, "%s", user); //gravando as info no arquivo

        
        //abrindo o arquivo novamente para mostrar as informações gravadas lá dentro
        arq = fopen("textosimples.txt", "r");

        fclose(arq);

        printf("%s\n%s\n%s", phrases, new_message, user);

        return 0;
        }