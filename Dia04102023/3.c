/*Escreva um programa em C que leia os nomes de cinco pessoas e mostre-os em
    ordem alfabética (usar matriz de string)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main(){

        char nome[20] [20], aux[20]; // aux vai fazer a troca

                for(int i=0; i<5; i++){

                    printf("\nDigite um nome: ");
                                    //o tamanho vai ser a quantidade de caracteres que está armazenado na variável
                    fgets(nome[i], sizeof(nome[i]), stdin);

                        }
                                    //tam -1
                for (int i = 0; i < 5 - 1; i++) {
                                    //enquanto j menor do que 5 (qt de nomes) - o valor de i atual - 1
                    for (int j = 0; j < 5 - i - 1; j++) {
                        //Se der positivo irá trocar as ordens dos nomes
                        if (strcmp(nome[j], nome[j + 1]) > 0) {

                            strcpy(aux, nome[j]);
                            strcpy(nome[j], nome[j + 1]);
                            strcpy(nome[j + 1], aux);
                        }
                    }
                }
                //Limpa o terminal e mostra na ordem correta
                system("clear");
                puts("Ordem:");
                    for(int i=0; i<5; i++){
                                        //os nomes foram armazenados inicialmente em i
                        printf("%s\n", nome[i]);
                    }

                system("pause");
                    int refaz;

                printf("Deseja fazer novamente?\n 1. Sim\n 2. Não\n");
                scanf("%i", &refaz);
                    switch (refaz)
                    {
                    case 1:
                        system("clear");
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
    }