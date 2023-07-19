/*
Faça um programa que receba um número n e informe se ele é um número
perfeito ou não. Dizemos que um número n é perfeito quando a soma dos seus
divisores, exceto ele próprio é igual a n.
*/

#include <stdio.h>

int main(){

    
    int n, d=1, total=0;

        printf("Digite um número: ");
        scanf("%d", &n);

        if(n > 0){
            do{
                if(n % d == 0){
                    total += d;
                }
                d++;
            } while(total < n);
            if(n == total){
                printf("É um número perfeito");
            }else {
                printf("Não é um número perfeito");
        }
    }
    return 0;
}


/*#include <stdio.h> //Sobre a aula de for


int main(){

    int i;

    for(i=1; i<=5; i++){

        printf("Iteração %d\n", i);
    }


    return 0;
}*/