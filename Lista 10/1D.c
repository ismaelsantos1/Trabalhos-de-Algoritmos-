/*
Receber uma matriz A[6][6] e retornar o menor elemento da sua diagonal
secundária, mostrando a posição em que ele está armazenado.
*/

#include <stdio.h>

#define n 3

    int main(){

        int mat[n][n], i, j, menor, posI, posJ;

            for(i=0; i<n; i++){
                printf("\n");

                for(j=0; j<n; j++){
                    
                    printf("Matriz [%d][%d]= ", i, j);
                    scanf("%d", &mat[i][j]);

                    //if(j==0 && i==0 && (i+j)== (n-1)){
                }
            }
                        menor = mat[0][n-1];
                        posI = 0;
                        posJ = n-1;

            for(i=0; i<n; i++){
        
                for(j=0; j<n; j++){
                    if ((i + j) == (n-1)){
                        if((mat[i][j]) < menor){
                            menor = mat[i][j];
                            posI = i;
                            posJ = j;
                        }
                    }
                    

                    
                }
            }
                    
                
                for(i=0; i<n; i++){
                    printf("\n");

                    for(j=0; j<n; j++){
                        printf("\t%d", mat[i][j]);
                    }           
                }
                printf("\nO menor elemento da diagonal secundária está na posição: [%d][%d]", posI, posJ);
                printf("\nO elemento encontrado é: %d", menor);
        return 0;
    }