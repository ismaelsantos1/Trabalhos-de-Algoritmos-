/*Faça um programa que leia 10 valores reais e os apresente na ordem inversa da entrada.*/

#include <stdio.h>

#define TAM 5 //tamanho do vetor

    int main(){

        int vet[TAM], i;


            for(i=0; i<TAM; i++){

                printf("Insira um valor: ");
                scanf("%d", &vet[i]);

            }
            
                printf("A ordem inversa é: ");

            for(i=(TAM -1); i>=0; i--){

                printf("\n%d", vet[i]);
            }

        return 0;
    }