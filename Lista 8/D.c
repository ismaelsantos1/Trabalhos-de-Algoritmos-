/*
Faça um algoritmo que mostre todos os divisores dos números que estão no
intervalo fechado de X a Y.
*/

#include <stdio.h>

    int main(){

        int x, y, intervalo, r;

        printf("Digite um valor X: ");
        scanf("%d", &x);
        printf("Digite um valor Y: ");
        scanf("%d", &y);

                if(x > y){
                    intervalo = x-y;
                } else if(x < y){
                    intervalo = y -x;
                } else{
                    printf("Valores iguais não possuem intervalo");
                    return 0;
                }
                    if(intervalo > 0){
                    printf("Os divisores dos números do intervalo entre X e Y são: ");
                }
            for(r=1; r<=intervalo; r++){

            if(intervalo % r == 0){
                    printf("%d\n", r);
            }
        }
        return 0;
    }