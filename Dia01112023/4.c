/*
Implemente uma função recursiva que determine se um número é ímpar (retorno
1) ou par (retorno 2). Para isso, não use o operador de resto, mas sim subtrações
sucessivas.
*/

#include <stdio.h>
#include <stdlib.h>

    /*int fatorial(int x){
        if (x == 0 || x == 1)
            return 1;
        else
            return (x*fatorial(x-1));
    }

    int main(){
        int x;
        x = fatorial(5);
        printf ("O factorial de 5 eh %d",x);
    }*/


    int ParouImpar(int x){
        int num= x;

            if(x==1){

                printf("O número é ímpar");
            } else if(x==0){
                printf("O número é par");

            }else{
                   //printf("%d\n",num);
                return (ParouImpar(x-2));
            }
        return num;
    }

    int main(){

        int n, result;

            printf("Digite um valor: ");
            scanf("%d", &n);

            result = ParouImpar(n);
                
        return result;
    }