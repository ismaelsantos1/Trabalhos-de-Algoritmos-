/*
Escreva um programa em C que verifique se uma palavra é palíndrome
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main(){

        char nome[20], copia[20];

            //Não verifica se uma FRASE pode ser palíndroma. Ex: a grama é amarga
            printf("Digite algo: ");
            fgets(nome, 20, stdin);

            //o que foi armazenado em nome é copiado na outra string
            strcpy(copia, nome);

                int tam, i, j, refaz;

            printf("Tamanho do que foi digitado: %i", tam = strlen(nome));

                j = tam-2;
                        //-2 pois serão gerados os índices 0, 1 e 2
            for(i=0; i<tam-2; i++){
                
                //se o vetor nome na posição for diferente da copia na posição j
                if(nome[i]!= copia[j]){
                    system("clear");
                    puts("\nNão é palíndromo. Quer tentar novamente?\n 1.Sim \n2.Não");
                    scanf("%i", &refaz);
                        switch(refaz){
                            case 1:
                                system("clear");
                                system("pause");
                                return main();
                                break;
                            case 2:
                                return 0;
                        }
                    return 0;
                }
                j--;
            }
            printf("\nÉ palíndromo\n");

                printf("\n");
                system("pause");

                printf("Deseja fazer novamente?\n 1. Sim\n 2. Não\n");
                scanf("%i", &refaz);
                    switch (refaz){
                    case 1:
                        system("clear");
                        system("pause");
                        return main();
                        break;
                    
                    case 2: 
                        system("clear");
                        printf("\n########################################################################\n");
                        printf("Valeu");
                        printf("\n########################################################################\n");
                        return 0;

                    default:
                        break;
                    }
        return 0;
    }

