/*
Ler uma matriz 5x5 e calcular e imprimir as somas:

Da linha 4;
Da Coluna 2;
Da diagonal principal;
De todos os elementos da matrizes;
*/

#include <stdio.h>

#define line 5
#define col 5

    int main(){

        int vet[line] [col], i, j, somaL=0, somaCol=0, somaDia=0, somaAll=0;

            for(i=0; i<line, i++;){
                for(j=0; j<col; j++){
                    
                    printf("\n[%d][%d]", i, j);
                    scanf("%d", &vet[i][j]);

                    somaAll+= vet[i][j];

                    if(vet[i] == vet[4]){

                        somaL+= i;
                    }

                    if(vet[j]== vet[2]){

                        somaCol+= j;
                    }

                    if(i == j){
                        somaDia += vet[i][i];
                    }
            }

            for(i=0; i<line; i++){
                
                printf("\n");

                for(j=0; j<col; j++){

                    printf("\t%d", vet[i][j]);

                }
            }

        }
            printf("A soma da linha 4 é: %d"
            "\nA soma da coluna 2 é: %d"
            "\nA soma da diagonal principal é: %d"
            "\nA soma de todos os elementos é: %d", somaL, somaCol, somaDia, somaAll);
        return 0;
    }