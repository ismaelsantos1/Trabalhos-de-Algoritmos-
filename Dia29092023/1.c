#include <stdio.h>
#include <string.h>

/*    1. Criar um programa que receba 3 nomes e apresente-os em ordem alfabética*/
    
    int main(){

        char nome1[26], nome2[26], nome3[26], i;
        int  comp1, comp2, comp3;

        printf("Digite um primeiro nome: ");
        fgets(nome1, 26, stdin);

        printf("Digite um segundo nome: ");
        fgets(nome2, 26, stdin);

        printf("Digite um terceiro nome: ");
        fgets(nome3, 26, stdin);

            comp1 = strcmp(nome1, nome2);
            //comp2 = strcmp(nome2, nome3);
            comp3 = strcmp(nome1, nome3);

            

            /*if(comp1 > 0){
                puts(nome2);
            }else{
                puts(nome1);
            }

            if(comp2 > 0){
                puts(nome1);
            } else{
                puts(nome3);
            }

            if(comp3 > 0){
                puts(nome1);
            } else{
                puts(nome3);
            }*/

            /*if(comp1 > 0){
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