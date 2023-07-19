/*
Calcula e escreve a soma dos n primeiros termos da série, com n>3:
*/

#include <stdio.h>

    int main(){

        int n, i=1;
        float result, denominador=1, numerador=1;

        printf("Digite um número maior do que 3: ");
        scanf("%d", &n);

        if(n > 3){
            do{
                    if(i == 1){
                        printf("\n%.0f/%.0f", numerador, denominador);
                        result += (numerador/denominador);
                    }
                    if(i % 2 == 1 && i != 1){
                        printf(" + %.0f/%.0f", numerador, denominador);
                        result-= (numerador/denominador);
                    }
                    if(i == 2){
                        printf(" %.0f/%.0f", numerador, denominador);
                        result += (numerador/denominador);
                    }
                    if(i % 2 == 0 && i != 2){
                        printf(" - %.0f/%.0f", numerador, denominador);
                        result -= (numerador/denominador);
                    }
                numerador+=1;
                denominador+=2;
                i++;
            } while(i <= n);
            printf("\nA soma dos termos é: %.6f", result);
        } else{
            printf("Insira um valor válido.");

        }

        return 0;
    }

