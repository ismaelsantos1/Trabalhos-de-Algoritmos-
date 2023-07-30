/*
Faça um programa que receba um inteiro n (entre 1 e 9) e realize a seguinte
impressão (Para n = 9):

*/

#include <stdio.h>

    int main(){

        int n, i=1, sCont;

            printf("Digite um número entre 1 e 9: ");
            scanf("%d", &n);

                if(n > 0 && n < 10){

                    do{
                        sCont=1;
                        while(sCont <=i){
                            if(sCont == 1 && i==1)
                                printf("\n%i", i);
                            if(sCont == 1 && i!=1)
                                printf("%i", i);
                            if(sCont<i && sCont > 1)
                                printf("%i", i);
                            else if(sCont == i)
                                printf("%i\n", i);
                        sCont++;
                        }
                    i++;
                    } while(i<=n);
                } else{
                    printf("Valor não está entre 1 e 9. O programa será fechado");
                }
        return 0;
    }