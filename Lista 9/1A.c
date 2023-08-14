/*
a) Leia um vetor de 15 posições e em seguida leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/

#include <stdio.h>

#define TAM 6 // tamanho do vetor

    int main(){

        int x, y, i, vet[TAM], soma, novoVX, novoVY;


    do{
        printf("\nDigite uma posição X dos vetores: ");
        scanf("%d", &x);
        
    
    }while(x<0 || x >= TAM );

    do{

        printf("\nDigite uma posição Y: ");
        scanf("%d", &y);
    } while(y<0 || y >= TAM);

        for(i=0; i<TAM; i++){
            printf("vet[%d] = ", i);
            scanf("%d", &vet[i]);

            if(x == i){
                novoVX = vet[i];
            }
            if(y == i){
                novoVY = vet[i];
            }
        }

    printf("A soma dos números das posições escolhidas é = %d", (soma = novoVX + novoVY));

    return 0;
    }