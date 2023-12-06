/*
Crie um arquivo texto de nome “texto.txt”. O usuário deverá inserir caracteres
nesse arquivo e a condição de parada é o caracter ‘0’ (zero). Apresente os
caracteres inseridos pelo usuário no arquivo na tela do computador.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main(){
        
        char carac;
        FILE *arq = fopen("texto.txt", "w");

        if(arq == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return 1;
        }

            printf("Escreva um texto e para finalizar insira 0: \n");
            
            do{
                carac = getchar();
                fputc(carac, arq);
            } while(carac != '0');
            
            arq = fopen("texto.txt", "r");
            
            if(arq == NULL) {
                printf("Erro ao abrir o arquivo!\n");
                return 1;
            }
            printf("\nTexto digitado:\n");

            while((carac = fgetc(arq)) != EOF){
                putchar(carac);
            }
            fclose(arq);
            return 0;
    }