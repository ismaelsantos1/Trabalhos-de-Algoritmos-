/*
    Escreva um programa em C que leia uma frase e apresente uma sigla com as
    iniciais de cada palavra da frase.
    Digite uma frase: Pedro Alcântara Trindade
    A sigla é PAT
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 50
    int main(){

        char frase[TAM];

            printf("Digite uma frase: ");
            fgets(frase, 50, stdin);

            int i;

                printf("A sigla é: %.1s", frase);

                for(i=0; TAM > i ; i++){
                    
                    if(frase[i] == ' '){

                        printf("%c", frase[i+1]);
                    }
                }

        return 0;        
    }