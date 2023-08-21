/*
Leia dois vetores de 10 posições e calcule um terceiro vetor contendo, nas
posições pares os valores do primeiro e nas posições impares os valores do
segundo.
*/

#include <stdio.h>
#define TAM 3
#define TAM2 6

    int main(){

        int vet1[TAM], vet2[TAM], vet3[TAM2], i, j;
            for(i=0; i<TAM; i++){

                printf("\nvet1[%d]= ", i);
                scanf("%d", &vet1[i]);
            }

            for(i=0; i<TAM; i++){

                printf("\nvet2[%d]", i);
                scanf("%d", &vet2[i]);
            }

            j=0;

            for(i=0; i<TAM; i++){
                vet3[j] = vet1[i];
                j+=2;
            }

            j=1;

            for(i=0; i<TAM; i++){
                vet3[j] = vet2[i];
                j +=2;
            }

            for(i=0; i<TAM2; i++){

            printf("\nvet3[%d]= %d", i, vet3[i]);

            }
        return 0;
    }
    