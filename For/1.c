/*Faça a soma de todos os números no intervalo fechado de A e B*/

#include <stdio.h>

int main(){

    int a, b, i, sum=0;

    printf("Digite um número A: ");
    scanf("%d", &a);

    printf("Digite um outro número B: ");
    scanf("%d", &b);

    for(i = a; i <= b; i+=1){

        printf("%d\n", i);
        sum+= 1;
    };

    printf("\nResultado: %d", sum);

    return 0;

}

/* int x, z;
    for(x =100; x!= 65; x-=5){ //x!=65 significa que o código irá rodar até x chegue a 65, assim ao chegar no valor especificado, ele para.
        z = x*x;
        printf("O quadrado de %d, %d\n", x,z);
    }*/