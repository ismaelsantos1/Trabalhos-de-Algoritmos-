/*
Deﬁna um programa em C que manipule arquivos e que faça uso das funções argc()
e argv() (comente o uso dessas funções no código
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    int main(){
    int x;
    int *ponteiro;
    printf("Endereço de x = %x\n", &x);
    printf("Valor do ponteiro = %x\n", ponteiro);
    printf("Endereço do ponteiro = %x\n", &ponteiro);

    for(int i=3; i>=0; i--){

        printf("Digite um valor %d:", i);
        scanf("%d", &x);
        ponteiro = &x;
        ponteiro +=1;

    }
        printf("\nValor no endereço da variável:\n");

            for(int j=1; j<=3; j++){
                printf("%x - %d\n", &x, x);
            }
    return 0;
}