#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*    1. Criar um programa que receba 3 nomes e apresente-os em ordem alfabética*/
    
    int main(){

        char nome1[26], nome2[26], nome3[26], aux[26];
        //int  comp1, comp2, comp3;

        printf("Digite um primeiro nome: ");
        fgets(nome1, 26, stdin);

        printf("Digite um segundo nome: ");
        fgets(nome2, 26, stdin);

        printf("Digite um terceiro nome: ");
        fgets(nome3, 26, stdin);

            //Opção 1 pra rodar
            if(strcmp(nome1, nome2) > 0 && strcmp(nome1, nome3)>0){

                strcpy(aux, nome3);
                strcpy(nome3, nome2);
                puts(aux);
                puts(nome3);
                puts(nome1);

            } else if(strcmp(nome2, nome1)>0 && strcmp(nome2, nome3)>0){

                strcpy(aux, nome2);
                strcpy(nome2, nome1);
                puts(nome3);
                puts(nome1);
                puts(aux);

            } else if(strcmp(nome3, nome1) > 0 && strcmp(nome3, nome2)> 0){

                strcpy(aux, nome3);
                strcpy(nome3, nome1);
                puts(nome2);
                puts(nome1);
                puts(aux);
            } else{

                system("pause");
                return main();
            }

            //Opção 2 pra rodar

            /*comp1 = strcmp(nome1, nome2);
            //comp2 = strcmp(nome2, nome3);
            comp3 = strcmp(nome1, nome3);


            if(comp1 > 0){
                //strcpy(nome3, nome1);
                puts(nome3);
                puts(nome2);
                puts(nome1);

            } 
            if(comp1 > 0){
               // strcpy(nome2, nome1);
                puts(nome2);
                puts(nome3);
                puts(nome1);

            } 
            if(comp2 < 0){

                //strcpy(nome3, nome1);
                puts(nome1);
                puts(nome2);
                puts(nome3);
            
            }*/
            

        return 0;
    }