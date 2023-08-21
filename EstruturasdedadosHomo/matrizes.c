/*Escreva um programa que armazene valores inteiros numa matriz 3x3, calcule a soma e a média dos elementos, mostrando o resultado.
*/

#include <stdio.h>

#define line 3
#define col 3

    int main(){

        int soma=0, mat[line] [col], i, j; //i vai incrementar as linhas e j incrementará as colunas, logo serão dois laços for
        float media=0;

            for(i=0; i<line; i++){
                for(j=0; j<col; j++){ //Sempre virá a coluna dentro do for que incrementa a linha. Dessa forma, a coluna será feita primeiro e depois irá para a segunda linha e continuará assim até que i seja igual a quantidade definida de lines e j = a quantidade definida de col's.

                    printf("\nmat[%d][%d] =", i,j);
                    scanf("%d", &mat [i][j]);

                    soma += mat[i][j];
                }

            }

                for(i=0; i<line; i++){

                        printf("\n"); //sempre que começar uma nova linha ele fará uma quebra de linha

                    for(j=0; j<col; j++){ 

                    printf("\t%d", mat[i][j]); //aqui ele irá imprimir todas as colunas dentro da linha correspondente. Isso será feito até que a quantidade de colunas esteja igual a j.
                    
                }

            }

                    media = (float) soma/(line * col);
                    printf("\n\nA soma é %d\n", soma);
                    printf("A média dos elementos é: %.1f", media);
        return 0;
    }