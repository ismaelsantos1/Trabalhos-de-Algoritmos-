#include <stdio.h>

int main(){

  char nome [50];
  float sBruto, sLiqui, nDepen, inss;

  printf("Digite seu nome: \n");
  scanf("%s", &nome);

  printf("Digite o n�mero de dependentes: \n");
  scanf("%f", &nDepen);

  printf("Informe seu sal�rio bruto: ");
  scanf("%f", &sBruto);

  if(sBruto <= 500){
    inss = (sBruto * 7)/100;
    printf("\nSeu desconto � de: %.2f", inss);
  } else if(sBruto >= 501 && sBruto <=900){
  	inss = (sBruto * 9)/100;
  	printf("\nSeu desconto � de: %.2f", inss);
  } else{
  	inss = (sBruto * 11)/100;
 	printf("\nSeu desconto � de: %.2f", inss);
	}
	
	sLiqui = sBruto - inss + (15 * nDepen) + 4 + 100;
	printf("\n%s seu sal�rio l�quido � de: %.2f", nome, sLiqui);
	
	return 0;
}



/*
Fazer um algoritmo para ajudar no c�lculo do sal�rio de um funcion�rio. O
sistema deve pedir:
- nome do funcion�rio
- sal�rio bruto
- n�mero de dependentes
E deve mostrar:
- nome do funcion�rio e
- sal�rio l�quido
*/
