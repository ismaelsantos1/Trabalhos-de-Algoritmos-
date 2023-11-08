/*
Implemente a função:

    int eqvalue(int v[], int n)

Ela recebe um inteiro "n" e retorna o número de vezes que esse inteiro "n" aparece no vetor "v" de 10 posições
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10
    int eqvalue(int v[], int n){

        int count=0;

            for(int i=0; i<TAM; i++){

                if(v[i] == n){
                    count++;
                }
            }
            return count;
    }
    
    int main(){

        int n, result;
        int v[TAM] = {1,};
            printf("Digite uma sequência de valores para ver quantas vezes ele aparece no programa\n");

            for(int i=0; i<TAM; i++){
                printf("\nDigite um valor: ");
                scanf("%d", &v[i]);

            }
            printf("Digite o valor a ser encontrado: ");
            scanf("%d", &n);

            result = eqvalue(v, n);

            printf("A quantidade de vezes que aparece é: %d", result);
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