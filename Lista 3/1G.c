/*
Escreva um algoritmo em C que verifica se o ano é bissexto.
*/

#include <stdio.h>

int main(){

    int ano, calcBisex;

    printf("Digite um ano e saiba se é bissexto ou não: \n");
    scanf("%d", &ano);

    calcBisex = ano / 4;

    if (calcBisex == ano / 4)
    {
        printf("Esse é um ano bissexto");
    } else {
        printf("Esse não é um ano bissexto");
    }
}