/*
Implemente uma função receba um vetor de 20 elementos do tipo struct (definição abaixo) e que retorne o título do produto mais caro. 

    struct Produto{

        char titulo[40];
        int quantidade_vendida;
        float preco;
    }
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 6

    struct Produto{

        char titulo[40];
        int quantidade_vendida;
        float preco;
    };

    char * tProdutomaiscaro(struct Produto valor[TAM]){
        float caro = 0.0;
        int idx;
            printf("O produto mais caro é:"); 

        for(int i=0; i<TAM; i++){
            if(caro < valor[i].preco){
                caro = valor[i].preco;
                idx = i;
            }
        }

        return valor[idx].titulo;
        
    }

    int main(){

        //printf("Digite as informações do produto:");

            struct Produto info[TAM] = {{"Notebook", 1000, 4500.99}, {"Celular", 1500, 9070.89}, {"Tablet", 780, 3550.90}, {"Smartwatch", 3500, 1150.65}, {"Tv", 650, 3600.00}, {"Câmera", 54, 850.99}};

                /*for(int i=0; i<TAM; i++){

                    printf("Digite um título: ");
                    scanf("%s", info[i].titulo);

                    printf("Digite a quantia de vendas: ");
                    scanf("%d", &info[i].quantidade_vendida);

                    printf("Digite o valor do produto: ");
                    scanf("%f", &info[i].preco);

                    printf("\n=====================================================================\n");
                }*/
                printf(" %s\n", tProdutomaiscaro(info));
                return 0;
    }