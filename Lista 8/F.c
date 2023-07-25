/*
Escreva um programa que receba as dimensões de uma matriz e escreva os seus
elementos em função da linha e coluna. Ex.: m= 3 e n = 4
*/

#include <stdio.h>

    int main(){

        int l, c, cL=1, cC=1;

            printf("Digite o número de linhas: ");
            scanf("%d", &l);

            printf("Digite o número de colunas: ");
            scanf("%d", &c);

            for((cL=1) && (cC=1); cL <= l; (cL++) && (cC=1)){

                printf("\n");
                while (cC <= c){

                    printf("  %d%d", cL, cC);
                    cC++ ;//cC = c. colunas
                }
                
                //cL = c. Linhas
            }
        return 0;
    }