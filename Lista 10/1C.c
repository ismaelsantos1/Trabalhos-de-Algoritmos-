/*
Gerar e imprimir uma matriz de ordem 4 onde seus elementos são da forma:
A[i,j] = 2*i + 7*j – 2 se i < j;
A[i,j] = 3*i – 1 se i = j ;
A[i,j] = 4*i – 5*j*2 se i > j.
*/

#include <stdio.h>

#define line 4
#define col 4

    int main(){

        int mat[line][col], i, j;
            printf("A matriz resultante é: ");

            for(i=1; i<=line; i++){
                printf("\n");

                for(j=1; j<=col; j++){

                    if(i<j){
                        
                        mat [i][j] = (2 * i) + (7*j) - 2;
                        printf("\t%d", mat[i][j]);

                    } 
                    if(i==j){
                        mat[i][j] = (3 * i) - 1;
                        printf("\t%d", mat[i][j]);
                    } 
                    if(i>j){
                        mat[i][j] = (4*i) - (5*j) * 2;
                        printf("\t%d", mat[i][j]);

                    }
                }
            }
            return 0;
}