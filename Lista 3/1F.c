#include <stdio.h>

int main() {

    int mes;

    printf("Digite o número correspondente ao mês: \n");
    scanf("%d", &mes);

    switch (mes){

    case 1:
        printf("A estação do ano correspondente ao mês %d é verão", mes);
    break;

    case 2:
        printf("A estação do ano que corresponde ao mês %d é verão", mes);
    break;

    case 3:
        printf("A estação do ano que corresponde ao mês %d é verão", mes);
    break;

    case 4:
        printf("Parabéns, nós estamos em outono");
    break;

    case 5:
        printf("Parabéns, nós estamos em outono");
    break;

    case 6:
        printf("Estamos no final de outono");
    break;

    case 7:
        printf("Estamos entrando no inverno. Bem vindo frio");
    break;

    case 8:
        printf("O frio chegou, bro. Dê boas vindas ao inverno. A MELHOR ESTAÇÃO DO ANO");
    break;

    case 9:
        printf("Estamos quase saindo do inverno!");
    break;

    case 10:
        printf("A primavera chegou. Dê boas vindas a segunda melhor época do ano");
    break;

    case 11:
        printf("Primavera já está aqui, amigo");
    break;

    case 12:
        printf("A primavera está indo embora. Dê adeus a ela e se prepare para o calor");
    break;


    default: 
        printf("Seu corno, faz o negócio direito!");
        break;
    }
}





/*Escreva um algoritmo em C que recebe um número de 1 a 12 e exibe a estação
do ano correspondente.*/