/*
Implemente uma função que receba como parâmetro 50 valores inteiros
armazenados em um vetor unidimensional e retorna o maior valor dentre eles.
*/

/*#include <stdio.h>
#include <stdlib.h>
#define TAM 6

    int vMaior(int v[]){
        
        int max = 0;
        for (int i=0; i<TAM; i++){
            if (v[i] > max) {
                    max = v[i];
                }
        }
    }

    int main(){
        int v[TAM]={1,2,3,4,5,6};
        printf("O maior valor entre ele é: %d", vMaior(v));
        return 0;
    }*/

/*
Implemente a função:
“int eqvalue(int v[], int n)”
Ela recebe um inteiro “n” e retorna o número de vezes que esse inteiro “n” aparece
no vetor “v” de 10 posições.
*/

/*#include <stdio.h>
#include <stdlib.h>
#define TAM 10

    int eqvalue(int v[], int n){
        int contador=0;
        for(int i=0; i<TAM; i++){
            if(v[i] == n){
                ++contador;
            }
        }
        printf("A quantidade de vezes que %d repete é: %d", n, contador);
        return 0;
    }

    int main(){
        int v[]={1,2,8,4,8,6,8,8,9,10};
        int n, result;
        printf("Digite um número qualquer: ");
        scanf("%d", &n); 
        result = eqvalue(v,n);
        return result;
    }*/

    /*
    Implemente uma função receba um vetor de 20 elementos do tipo struct (definição
abaixo) e que retorne o título do produto mais caro.
struct Produto{
char titulo[40];
int quantidade_vendida;
float preço;
    */
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

    struct Produto{
        char titulo[40];
        int quantidade_vendida;
        float preço;
    };

    char * recebevalor(struct Produto x[TAM]){
        float maiorValor = 0.00;
        int idc = 0;
        for(int i=0; i<TAM; i++){
            if(x[i].preço> maiorValor){
                maiorValor = x[i].preço;
                idc = i;
            }
        }
        return x[idc].titulo;
    }

    int main(){
        struct Produto info[TAM]= {{"Notebook", 1000, 4500.99}, {"Celular", 1500, 9070.89}, {"Tablet", 780, 5070.89}, {"Smartwatch", 3500, 1150.65}, {"Tv", 650, 3600.00}, {"Câmera", 54, 850.99}};
        printf("O produto mais caro é o %s", recebevalor(info));
        return 0;
    }*/

/*
Implemente uma função recursiva que determine se um número é ímpar (retorno
1) ou par (retorno 2). Para isso, não use o operador de resto, mas sim subtrações
sucessivas.
*/

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int ParOuImpar(int n){

        int x = n;
        if(n == 1){
            printf("É ímpar");
        } else if(n == 0){
            printf("É par");
        } else{
            //printf("Não foi possível definir");
            return ParOuImpar(x-2);
        }

        return x;
    }

    int main(){
        int n, result;

            printf("Digite um número: ");
            scanf("%d", &n);

            result = ParOuImpar(n);
            return result;
    }*/