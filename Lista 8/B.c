/*
Desenvolver um algoritmo que efetue a soma de todos os números ímpares que
são múltiplos de três e que se encontram no conjunto dos números de 1 até
500.
*/

#include <stdio.h>

    int main(){

        int sum=0, i;


            for (i=0; i <=500; i+=3){
                
                if(i % 2 != 0){ //aqui vai verificar se o número é ímpar
                    sum += i;
                }
            }
                printf("Verificando %d", sum);
        return 0;
    }