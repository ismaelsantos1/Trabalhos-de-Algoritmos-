/*
Implemente uma função que calcule um número inteiro elevado a
    uma determinada potência, isto é, a função deve receber a base e o
    expoente e retornar o resultado.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

    int calculo(int base, int potencia){

        int result;

        result = pow(base, potencia);

        return (result);
    }

    int main(){

        int resultado, b, p;

            puts("Digite um valor para a base: ");
            scanf("%d", &b);

            puts("Digite um valor para a potência: ");
            scanf("%d", &p);

            resultado = calculo (b, p);

            printf("O resultado desse cálculo é: %d", resultado);
    }