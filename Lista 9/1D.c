/*
Dados dois vetores x e y em um espaço de 20 dimensões, faça um programa
que calcule e mostre o produto escalar desses vetores.
*/

#include <stdio.h>
#define TAM 20

    int main(){

        int pEscalar = 0, vetX[TAM], i, vetY[TAM];

            for(i=0; i<TAM; i++){
                
                printf("Digite um valor vetX[%d]: ", i);
                scanf("%d", &vetX[i]);

                printf("Digite um valor vetY[%d]: ", i);
                scanf("%d", &vetY[i]);



                    pEscalar += (vetX[i] * vetY[i]);
            }
            printf("O produto escalar desses vetores é: %d", pEscalar);
    }