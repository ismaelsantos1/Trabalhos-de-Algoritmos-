/*Crie um algoritmo que o usuário entre com vários números inteiros e positivos
e imprima o produto dos números ímpares e a soma dos números pares.*/

#include <stdio.h>

int main(){

    int n, pImpar=1, sumPares=0, cont=1;

    printf("Para parar o programa digite o número 1 para finalizar \n");
    printf("\n-----------------------------------------------------------------\n");

    do
    {
        printf("Digite um valor inteiro e positivo: ");
        scanf("%d", &n);

        if(n % 2 == 0 && n>0){
            /*é um número par*/
            sumPares += n;
        }
        else{
            /*É um número ímpar*/
            pImpar *= n;
        }
    cont++;

    } while (n>1);

    printf("\nO produto dos números ímpares é = %d\nA soma dos números pares é = %d", pImpar, sumPares);

    return 0;   
}
/*    if(num1 % 2 == 0){
    printf("É um número par");
    } else{
    printf("É um número ímpar");
    }

    return 0;
}*/