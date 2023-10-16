/*
        Usando a estrutura "atleta" do exercício anterior, escreva um programa que leia os
        dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais
        novo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

        typedef struct{

            char nome[50];
            int idade;
        } dados[3];
            dados Atleta;
    int main(){
            
            //char aux[50];
            int i, j;
            int trocarIdade;
            
                for(i=0; i<3; i++){

                    printf("\n\nDigite o nome do Atleta: ", i+1);
                    scanf("%s", Atleta[i].nome);

                    printf("Digite sua idade: ", i+1);
                    scanf("%d", &Atleta[i].idade);

                    fflush(stdin);
                    
                //}
                            //tam-1
                    //for(i=3; i>=0; i--){
                        for(j= i-1; j>0; j--){

                            if(Atleta[i].idade > Atleta[j].idade){
                                
                                trocarIdade = Atleta[i].idade;
                                Atleta[i].idade = Atleta[j].idade;
                                Atleta[j].idade = trocarIdade;
                            }
                        }
                    }
                    //system("clear");
                printf("Ordem por idade: \n");

                for(i=0; i<3; i++){
                    

                    printf("%d\n", Atleta[i].idade);

                }
                //printf("\nA idade do atleta mais velho é: \n%d", maisVelho);
        
    return 0;
    }
