/*
Elaborar um programa que leia 5 elementos do tipo de uma estrtura Livro, que contém os seguintes corpos: 
título, 
ano de edição, 
número de páginas 
preço. 
Ao final, mostrar os dados dos livros com maior preço e menor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main(){

        typedef struct {
            
            char titulo[50];
            int ano;
            int nPaginas;
            float preco;
        } Livro;

        Livro info;
        
            float maiorPreco = 0, menorPreco = 1000;

            printf("Para pesquisar sobre um livro digite as seguintes informações: \n\n");

            for(int i=0; i<=5; i++){
                printf("Titulo: ");
                fgets(info.titulo, 50 ,stdin);

                fflush(stdin);

                printf("Ano da edição: ");
                scanf("%i", &info.ano);

                fflush(stdin);

                printf("Número de páginas: ");
                scanf("%d", &info.nPaginas);

                fflush(stdin);
                
                printf("Preço: ");
                scanf("%.2f", &info.preco);

                fflush(stdin);
                
                    if(info.preco > maiorPreco){

                        maiorPreco = info.preco;
                    }
                    if(info.preco < menorPreco){

                        menorPreco = info.preco;
                    }
            }
            puts("Os livros a serem pesquisados é: ");

                for(int i=0; i<=5; i++){
                    printf("Título: %c\nAno de Publicação: %i\nQuantidade de páginas: %i\n\nMaior preço: %.2f\nMenor preço: %.2f\n", info.titulo, info.ano, info.nPaginas, maiorPreco, menorPreco);
                }
        return 0;
    }