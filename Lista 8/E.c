/*
Calcula e escreve a soma dos n primeiros termos da série, com n>3:
(Ex. n=5)
*/

#include <stdio.h>

    int main(){

        int n;
        float div, numer=1, denom=0; //denominador vai decrementar até ser 1

            printf("Digite um número maior do que 3: ");
            scanf("%d", &n);
        if(n > 3){
            for(denom = n; denom>=1; (numer+=2 && denom--)){

                /*numer +=2;
                denom--;*/

                    printf(" %.0f/%.0f+", numer, denom);
                    div += (numer/denom);
            
            }
            
        }
        printf("\n\nSomatório dos n primeiros termos: %.1f", div);
        return 0;
    }