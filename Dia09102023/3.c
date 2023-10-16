/*
        Escreva um programa que contenha uma estrutura representando uma data válida.
        Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e
        armazene nessa estrutura. Calcule e exiba o número de dias que decorrem entre as
        duas datas.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


                typedef struct{

                    int dia;
                    int mes; //= {'Janeiro', 'Fevereiro', 'Março', 'Abril', 'Maio', 'Junho', 'Julho', 'Agosto', 'Setembro', 'Outubro', 'Novembro', 'Dezembro'};
                    int ano;

                } dados;

        int main(){

                    dados data1, data2;

                    printf("Digite uma data: ");
                    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
                        //printf("\n===================================================================\n");
                        printf("\n===================================================================\n");
                    printf("Digite uma 2ª data: ");
                    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

                    //considerando que o ano NÃO é bissexto
                    int dias1 = data1.dia + data1.mes *30 + data1.ano * 365;
                    int dias2 = data2.dia + data2.mes *30 + data2.ano * 365;

                        int result;
                        
                        if(data1.ano < data2.ano){
                            
                            int aux = dias1;
                            dias1 = dias2;
                            dias2 = aux;
                                result = dias1 - dias2;
                        } else{

                            result = dias1 - dias2;
                        }
                    

                    printf("A quantidade de dias que há entre essas datas é de: %d", result);
            return 0;
        }