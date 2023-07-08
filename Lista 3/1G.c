/*
Escreva um algoritmo em C que verifica se o ano é bissexto.
*/

#include <stdio.h>

int main(){

    int ano, calcBisex;

    printf("Digite um ano e saiba se é bissexto ou não: \n");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0)|| (ano % 400 == 0)){
        printf("É um ano bissexto");
    } else{
        printf("Não é um ano bissexto");
    }

    return 0;
}

/*
Passo 1: Ser divisível por 4
Passo 2: Se não for divísivel por 100, é bissexto. Se for divisível por 100, então...
Passo 3: Se não for divisível por 400, então não é bissexto. Mas se for divisível por 400, ele vai ser.

*/