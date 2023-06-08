#include <stdio.h>

int main(){

    char nDias;

    printf("Digite algum número correspondente ao dia da semana: \n");
    scanf("%c", &nDias);

    if(nDias == '1'){
        printf("Hoje é domingo, malandro");
    } else if (nDias == '2'){
        printf("Hoje é segunda-feira");
    } else if(nDias == '3'){
        printf("Hoje é terça-feira");
    } else if (nDias == '4'){
        printf("Hoje é quarta-feira");
    } else if(nDias == '5'){
        printf("Hoje é quinta-feira");
    } else if(nDias == '6'){
        printf("SEX TO U!!!!");
    } else if(nDias == '7'){
        printf("Sábado, vai curtir");
    } else{
        printf("\nO corno, digita um número que corresponde ao dia da semana. Obrigado");
    }
    
}


/*
Escreva um algoritmo em C que recebe um número de 1 a 7 e exibe o dia da
semana correspondente.
*/