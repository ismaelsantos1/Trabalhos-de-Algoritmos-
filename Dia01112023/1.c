/*
Implemente uma função que receba como parâmetro 50 valores inteiros aramzenados em um vetor unidimensional e retorna o maior valor dentre eles.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

    int vInteiros(int valor[]){

            int maior=0;
            
            for(int i=0; i<TAM; i++){
                if(maior < valor[i]){
                    maior = valor[i];
                }
            }
        return maior;
    }

    int main(){

        int x[TAM], result;

            for(int i=0; i<TAM; i++){

                printf("Digite um valor: ");
                scanf("%d", &x[i]);
            }

            result = vInteiros(x);


            printf("O maior valor dos números armazenados é: %d", result);
    }

    /*#define TAM 5
            int somaVetor( int v[]){
                int soma=0,i;
                for (i=0; i<TAM; i++)
                soma+=v[i];
                return soma;
            }

            int main(){
                int x[TAM]={1,2,3,4,5};
                int r;
                r = somaVetor(x);
                printf("A soma dos numeros contidos no vetor eh %d",r);
            }*/