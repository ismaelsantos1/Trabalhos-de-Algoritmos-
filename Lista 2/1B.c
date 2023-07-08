#include <stdio.h>

int main(void){
	
	int a, b, aux;
	
	printf("\nDigite o primeiro valor: ");
	scanf("%d", &a); 
	
	printf("\nDigite o segundo valor: ");
	scanf("%d", &b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("O valor de A agora é: %d \n E o valor de B e: %d", a, b);
}
