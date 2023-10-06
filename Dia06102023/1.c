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

        struct Livro{
            
            char titulo[50];
            int ano;
            int nPaginas;
            float preco;
        } editora;
        
    
            printf("Para pesquisar sobre um livro digite as seguintes informações: \n\n");

            printf("Titulo: ");
            scanf("%s", editora.titulo);

            printf("%s", editora.titulo);
    }