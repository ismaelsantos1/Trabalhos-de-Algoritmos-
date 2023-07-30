/*
Faça um algoritmo que leia vários números e informe quantos desses números
entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido o algoritmo
deverá cessar sua execução.
*/

#include <stdio.h>

int main(){

    int n, cont=1;

    printf("Você deverá digitar vários números e o programa informará quantos estão entre 100 e 200. Para finalizar você deverá digitar 0\n");
    printf("\n----------------------------------------------------\n");

    do{

        printf("Digite um número entre 100 e 200: ");
        scanf("%d", &n);

        if(n > 100 && n < 200){
            cont++;
        }
    } while(n > 0);

    printf("Foram digitados %d números entre 100 e 200", cont);
    printf("\n------------------------------------------------\n");
    return 0;
}