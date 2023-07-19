/*
Faça um programa que receba a idade de dez pessoas e que calcule e mostre
a quantidade de pessoas com idade maior ou igual a 18 anos.
*/

#include <stdio.h>

int main(){

    int idade, i, idadeM18=0;

        for ( i = 1; i <= 5; i++){
            
            printf("Digite sua idade: ");
            scanf("%d", &idade);

            if(idade >0){
                if(idade >= 18){
                    idadeM18++;
                }
            }
        }
    printf("Há %d pessoas com idade igual ou maior de 18 anos", idadeM18);
    return 0;       
}