/*
Receber uma matriz M[3][3] e um valor A. O programa deverá multiplicar cada
elemento da matriz M por A, e mostrar a matriz resultante.
*/

#include <stdio.h>

#define line 3
#define col 3

    int main(){

        int mat[line][col], i, j, A, result[line][col];
            printf("Digite um valor para formar uma nova matriz: ");
            scanf("%d", &A);

            for(i=0; i<line; i++){
                for(j=0; j<col; j++){
                    
                    printf("\nmat[%d][%d]= ", i, j);
                    scanf("%d", &mat[i][j]);

                    result[i][j] = A * mat[i][j];

                }
            }
            for(i=0; i<line; i++){
                
                printf("\n");

                for(j=0; j<col; j++){

                printf("\t%d", result[i][j]);
                }
            }
        return 0;
    }