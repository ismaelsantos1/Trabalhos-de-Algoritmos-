/*
Escreva um algoritmo que encontre o quinto número maior que 1000, cuja
divisão por 11 tenha resto 5.
*/

#include <stdio.h>

int main(){

    int n=1001, cont=1;

    do{
        if(n % 11 == 5){
            cont++;
            printf("\n %d", n);
            printf(" é um número divisível por 11 com resto 5\n\n");
        }
        n++;
    } while(cont < 5); //pode pôr para o código rodar mais vezes, se assim desejar

    //printf("As divisões por 11 com resto 5 é: %d", n);
    return 0;
}