/*
        Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do
        atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados
        de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main(){

        typedef struct{

            char nome[50];
            char esporte[30];
            int idade;
            int altura;
        } dados[5];
            dados Atleta;
            
            char nomeh[50], nomei[50];
            int i, j;
            int maiorAltura= 0, maisVelho= 0;
            
                for(i=0; i<5; i++){

                    printf("\n\nDigite o nome do Atleta: ");
                    scanf("%s", Atleta[i].nome);

                    //fflush(stdin);

                    printf("Qual esporte pratica: ");
                    scanf("%s", Atleta[i].esporte);

                    //fflush(stdin);

                    printf("Digite sua idade: ");
                    scanf("%d", &Atleta[i].idade);

                    //fflush(stdin);

                    printf("Digite sua altura em cm: ");
                    scanf("%d", &Atleta[i].altura);

                    fflush(stdin);

                    if(Atleta[i].idade> maisVelho){
                        
                        maisVelho = Atleta[i].idade;
                        strcpy(nomei, Atleta[i].nome);
                    }
                }

                printf("Os nomes dos atletas cadastrados são: \n");

                for(j=0; j<5 ; j++){
                    

                    printf("O atleta %s faz %s tem %d anos e mede %d\n", nomei, Atleta[i].esporte, Atleta[i].idade, Atleta[i].altura);

                }
                printf("A idade do atleta mais velho é: \n%d\nE a altura do maior atleta é: %d", maisVelho, maiorAltura);
        
    return 0;
    }
