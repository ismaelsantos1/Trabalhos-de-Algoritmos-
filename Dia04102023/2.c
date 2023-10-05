/*
Escreva um programa em C que leia uma placa de um veículo (letras e números e
    informe o mês de pagamento do IPVA de acordo com o último número da placa (ver
    as definições abaixo):
    1,2 – fevereiro
    3,4 – março
    5,6 – abril
    7,8 – maio
    9,0 – junho
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tam 7
    int main(){

        char placa[tam];
        int i;
            
            printf("\nDigite o tamanho da placa: ");
            scanf("%s", placa); //SCANF pega o primeiro caractere em branco 

            //if(placa[i] >=0){
                printf("Mês de pagamento do IPVA: %c", placa[tam]);

                for(i=0; i <= tam ; i++){
                    
                    if(placa[i] == '1' || placa[i] == '2'){

                        printf("Fevereiro\n");

                    } 
                    if(placa[i] == '3' || placa[i] == '4'){
                        printf("Março\n");

                    } 
                    if(placa[i] == '5' || placa[i] == '6'){
                        
                        printf("Abril\n");
                    }
                    if(placa[i] == '7' || placa[i] == '8'){

                        printf("Maio\n");
                    } 
                    if(placa[i] == '9' || placa[i] == '0'){

                        printf("Junho\n");
                    }
                }
                
            /*} else{
                //system("clear");
                return main();
            }*/
        return 0;
    }

 