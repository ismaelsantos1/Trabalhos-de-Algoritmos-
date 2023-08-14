/*Primeira aula sobre vetores*/

/*#include 
#define PI 3.14 // é um exemplo de constante simbólica

*/

#include <stdio.h>

#define TAM 5

    int main(){

        int vet[TAM], i, soma=0, sPar=0, qPar = 0, sImpar=0, qImpar=0, posPar=0, posImpar = 0;
        float media, mediaP, mediaI;

        for(i=0; i<TAM; i++){

            printf("\nvet[%d] =", i /*+1*/); //i +1 mascara em qual índice está armazenado o valor
            scanf("%d", &vet[i]); 

            soma += vet[i];

            if(vet[i] % 2 == 0){
                sPar += vet[i];
                qPar++;

            } else{
                sImpar+= vet[i];
                qImpar++;
            }

            if(i%2 == 0){
                posPar += vet[i]; //vai somar os valores que estão nas posições pares

            } else{
                posImpar += vet[i]; //pos é de posíção
            }
        }

            if(qPar ==0){

                mediaP = -999;
            } else{            
                mediaP = (float) sPar / qPar;

            }
            if(qImpar == 0){

                mediaI = 0;

            } else{
                mediaI = (float) sImpar / qImpar;

            }

            media = (float)soma/TAM;

            printf("\nA soma é = %d", soma);
            printf("\nA soma dos valores nas posições pares é = %d", posPar);            
            printf("A soma dos valores nas posições ímpares é = %d", posImpar);
            printf("\nA média dos valores é = %.1f", media);
            printf("\nA média dos valores pares é = %.1f", mediaP);
            printf("\nA média dos valores ímpares é = %.1f", mediaI);

            printf("\n\n############################################################");

        for (i=0; i <TAM; i++){

            printf("\nvet[%d] = %d", i+1, vet[i]);
        }
        
        return 0;
    }