#include <stdio.h>

int main(void){
	
	double distancia, tempo, resultado;
	double formVM;

	printf("\nDigite o valor da distância em km: ");
	scanf("%lf", &distancia);

	printf("\nDigite o valor do tempo, em horas, em que percorreu a distância: ");
	scanf("%lf", &tempo);

	formVM = distancia / tempo ;

	resultado = formVM;

	printf("A velocidade em que você percorreu a distância de %lf foi: %.2lf ", distancia, resultado);
}
