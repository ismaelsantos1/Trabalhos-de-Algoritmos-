/*
Crie um programa que lê 10 frases e, após convertê-las em letras maiúsculas (usar
função toupper()), armazene-as em um arquivo. Ao ﬁnal o texto do arquivo deverá
ser apresentado na tela do computador.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 1000
    
    void to_upper(char *str){

        for(int i =0; i<strlen(str); i++){
            str[i] = toupper(str[i]);
        }
    }

    int main(){

        int i;
        char frase[100][tam];
        FILE *arq;
        
        printf("Digite 5 frases abaixo: \n");
        for(i=0; i<3; i++){
            fgets(frase[i], tam, stdin);

        }

        for(i=0;i<3;i++){
            to_upper(frase[i]);
        }
        arq = fopen("teste.txt", "w");
            if(arq == NULL){
                printf("\nErro ao abrir o arquivo!\n");
                return 1;
            }

            for(i=0;i<3;i++){
                fputs(frase[i], arq);
            }

            fclose(arq);

            arq = fopen("teste.txt", "r");
            if(arq == NULL){
                printf("\nErro ao abrir o arquivo!\n");
                return 1;
            }
            char text[tam*10];
            fgets(text, tam*10, arq);
            printf("Textos escritos no arquivo:\n", arq);

            fclose(arq);
            return 0;
    }
        