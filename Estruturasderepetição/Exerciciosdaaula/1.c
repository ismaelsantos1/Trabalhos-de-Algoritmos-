/*Faça um programa que leia n valores positivos e no final, informe o
seu somatório.*/

#include <stdio.h>

int main(){

    int n=0, total=0;

    printf("Informe números para ver o somatório deles. Digite um valor negativo para ver resultado\n\n\n");

    do{
        printf("Digite um valor: ");
        scanf("%d", &n);
        
        total += n;
    } while(n>0);

    printf("\n\nO somatório dos valores informados é: %d", total);

    return 0;
}