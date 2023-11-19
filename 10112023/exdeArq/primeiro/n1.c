/*
Crie um arquivo texto de nome “texto.txt”. O usuário deverá inserir caracteres
nesse arquivo e a condição de parada é o caracter ‘0’ (zero). Apresente os
caracteres inseridos pelo usuário no arquivo na tela do computador.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

    /*int main(){

        char carac[TAM];
        int i=0;
        FILE *arquivo;

                printf("Para finalizar o programa digite 0");

                printf("Escreva alguma coisa: ");

                arquivo = fopen("texto.txt", "w");
                    if(arquivo == NULL){

                        printf("Erro ao abrir o arquivo");
                        return 1;
                    }

            do{
                //escrevendo cada caracter na string pelo getchar
                carac[i] = getchar();
                i++;

                //escrevendo os caracteres no arquivo
                //fputc(carac, arquivo);
                fwrite(&carac, 2, sizeof(carac), arquivo);


            } while(carac[i] != '0');

            fclose(arquivo);
            arquivo = fopen("texto.txt", "r");
            if(arquivo == NULL){

                        printf("Erro ao abrir o arquivo");
                        return 1;
                    }
                    int result;
                printf("Caracteres inseridos no arquivo:\n");
                while((result = fgetc(arquivo)) != EOF) {
                
                    putchar(carac);
                }

                fclose(arquivo);

                system("pause");
                printf("\n===========================================================================\n");
                printf("Obrigado por contribuir ;)");
            
            return 0;
    }*/


//#include <stdio.h>

int main() {
    char carac;
    FILE *arquivo;

    arquivo = fopen("texto.txt", "w");

        if(arquivo == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return 1;
        }

            printf("Digite os caracteres desejados. Para encerrar, digite '0':\n");
    
        do {
            
            //armazena os caracteres na string
            carac = getchar();

            //escrevendo no arquivo
            fputc(carac, arquivo);
    
        } while(carac != '0');

            fclose(arquivo);

    arquivo = fopen("texto.txt", "r");
    
        if(arquivo == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return 1;
        }

            printf("\nCaracs inseridos no arquivo:\n");

            //lendo os caracteres dentro do arquivo
        while((carac = fgetc(arquivo)) != EOF) {
            putchar(carac);
        }

            fclose(arquivo);
    return 0;
}
