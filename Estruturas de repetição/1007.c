#include <stdio.h>

/*int main(){

    int i=1;

    do{
        printf("Iteração %d\n", i);
        i +=1; //Vai imprimir somente os números pares
        //i +=2; //para imprimir os números ímpares
    } while (i<=5); //i >=1 tornaria um loop infinito

    return 0;
    
}*/

int main(){

    int x;

    do{
        printf("Digite um número maior");
        scanf("%d", &x);


    }while(x<=0);
        
    printf("\n\nX = %d", x);

    return 0;
}