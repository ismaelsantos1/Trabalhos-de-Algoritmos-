/*
Os dados são: nome, dia, mês e
        ano de nascimento, valor da mensalidade e quantidade de dependentes. O
        programa deverá ler os dados e imprimir depois na tela. Deverá também informar o
        associado (ou os associados) com o maior número de dependentes.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

                    int main(){
                        
                        int MaiorQtDependentes = 0, j;

                        typedef struct{

                        char nome[50];
                        int dia, mes, ano, qtDependentes; //data de aniversário do titular e qt de dependentes
                        float mensalidade;

                        } dados[3];

                    dados associados;                                        
                                        //vai coletar 3 nomes. Pode ser alterado depois
                            for(int i=0; i<3; i++){
                                
                                    printf("Digite o nome do titular: ");
                                    scanf("%s", associados[i].nome);

                                    printf("Digite a data de nasscimento: \n");
                                    printf("\nDia: ");
                                    scanf("%d", &associados[i].dia);
                                        if(associados[i].dia>1 && associados[i].dia<=31){
                                            
                                            printf("\nMês: ");
                                            scanf("%d", &associados[i].mes);

                                                if(associados[i].mes > 0 && associados[i].mes <= 12){

                                                    printf("\nAno: ");
                                                    scanf("%d", &associados[i].ano);
                                                }
                                        }

                                    printf("\nDigite o valor da mensalidade: ");
                                    scanf("%f", &associados[i].mensalidade);


                                    printf("\nDigite a quantidade de dependentes: ");
                                    scanf("%d", &associados[i].qtDependentes);

                                    fflush(stdin);

                                        /*if(associados[i].qtDependentes > MaiorQtDependentes){
                
                                                MaiorQtDependentes = associados[i].qtDependentes;
                                        }*/
                            }

                            printf("\n\nOs associados são: ");
                                for(int i=0; i<3; i++){

                                    printf("Titular: %s\nData de nascimento: %d/%d/%d\nQuantidade de dependentes: %d\nMesalidade: %.2f", associados[i].nome, associados[i].dia, associados[i].mes, associados[i].ano, associados[i].qtDependentes, associados[i].mensalidade);

                                    printf("\n********************************************************************\n");
                                }
                                MaiorQtDependentes = associados[0].qtDependentes;
                                for(int i = 0; i < 3; i++){
                                    
                                    if(associados[i].qtDependentes > MaiorQtDependentes){
                                    MaiorQtDependentes = associados[i].qtDependentes;
                                    j = i;
                                    }    
                                }

                                printf("\n\nO associado com mais dependentes é o %s com: %d dependentes", associados[j].nome, associados[j].qtDependentes);

                        return 0;
                    }