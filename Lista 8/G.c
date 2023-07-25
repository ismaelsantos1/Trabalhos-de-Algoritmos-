#include <stdio.h>

        int main(){

        int l, c, cL=1, cC=1, s=2;

            printf("Digite o número de linhas: ");
            scanf("%d", &l);

            printf("Digite o número de colunas: ");
            scanf("%d", &c);

            for((cL=1) && (cC=1); cL <= l; (cL++) && (cC=1)){

                printf("\n");
                while (cC <= c){

                    printf("  i%d%d", cL*s, cC);
                    cC++ ;//cC = c. colunas
                }
                //cL = c. Linhas
            }
        return 0;
    }