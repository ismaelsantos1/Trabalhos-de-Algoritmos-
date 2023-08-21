/*
Leia um vetor de 20 posições e em seguida um valor X qualquer. Seu programa
deverá fazer uma busca do valor de X no vetor lido e informar a posição em que
foi encontrado ou se não foi encontrado.
*/

#include <stdio.h>

#define TAM 5

    int main(){

        int x, vet[TAM], i, achou=0; //usado para sinalizar se não for encontrado o valor

        for (i=0; i<TAM; i++){
            
            printf("Digite um valor vet[%d]: ", i);
            scanf("%d", &vet[i]);

        }

        printf("Digite um valor X: ");
        scanf("%d", &x);

        for (i=0; i<TAM; i++){
            
            if(x == vet[i]){
                achou = 1;
                printf("\nO valor de X está na posição %d", i);
                
            } 
        }
            if(achou == 0){

                printf("\nValor não encontrado no vetor");
            }
            return 0;
    }