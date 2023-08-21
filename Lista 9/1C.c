/*
Faça um programa que leia 15 números inteiros, armazene-os em um vetor,
solicite um valor de referência inteiro e:
• imprima os números do vetor que são maiores que o valor referência
• retorne quantos números armazenados no vetor são menores que o valor de
referência
• retorne quantas vezes o valor de referência aparece no vetor
*/

#include <stdio.h>

#define TAM 4

    int main(){
//vMREF são valores do vetor maiores do que o de referência
//vmenRef são quantos números armazenados no vetor serão menores que o valor de referência
//vezesVref são quantas vezes o valor de referência aparece no vetor

        int vRef, vMRef, vmenRef=0, vezesVref=0, vet[TAM], i;

            printf("Digite um valor de referência: ");
            scanf("%d", &vRef);

            for(i=0; i<TAM; i++){

                printf("\nDigite um valor inteiro: vet[%d]", i);
                scanf("%d", &vet[i]);

                if(vet[i]> vRef){
                    
                    vMRef++;
                }
                if(vet[i] < vRef){
                    vmenRef++;
                }
                if(vet[i]== vRef){
                    vezesVref++;
                }
            }
            printf("#######################################\n\n");
            printf("Números do vetor que são maiores que a referência: %d\nQuantidade de números armazenados no vetor são menores que a referência: %d\nVezes que o valor da referência aparece no vetor: %d", vMRef, vmenRef, vezesVref);
        return 0;
    }