/*
Crie um programa que lê 10 frases e, após convertê-las em letras maiúsculas (usar
função toupper()), armazene-as em um arquivo. Ao ﬁnal o texto do arquivo deverá
ser apresentado na tela do computador.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

    int main(){
        
        
        FILE *arquivo;
        char frases[100], c;
        int i=0, j=0;

        arquivo = fopen("convertendo.txt", "w");
            if(arquivo == NULL){
                printf("Erro ao abrir o arquivo.\n");
            }

            //Ler 10 frases
            for (i=1; i <=6; i++){
                
                printf("Digite a %dº frase: \n", i);
                fgets(frases, sizeof(frases), stdin);

                    //converter sapoha
                    for(j=1; j<=6; j++){

                        frases[j] = toupper(frases[j]);

                    }
                //escrevendo a string no arquivo
                fputs(frases, arquivo);
                //fprintf(arquivo,"%s\n", frases);
            }
            arquivo = fopen("convertendo.txt", "r");

                for(i=1; i<=6; i++){

                    printf("%s\n", frases);
                }

            fclose(arquivo);
            return 0;

    }