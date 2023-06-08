#include <stdio.h>

int main() {

  int num1, num2, num3;

  /*printf("Digite 3 diferentes números inteiros para compará-los e descobrir o
   * maior e o menor entre eles");*/

  printf("Digite o primeiro número: \n");
  scanf("%d", &num1);

  printf("Digite o segundo número inteiro: \n");
  scanf("%d", &num2);

  printf("Digite o terceiro número inteiro: \n");
  scanf("%d", &num3);

  if (num1 > num2 && num1 > num3) {
    printf("O  número %d é maior número que %d e maior que %d", num1, num2, num3);
  } else if (num2 > num1 && num2 > num3) {
    printf("O número %d é maior que %d e maior que %d ", num2, num1, num3);
  } else if (num3 > num1 && num3 > num1) {
    printf("O número %d é maior que %d e maior que %d", num3, num2, num1);
  } 


  

    return 0;
}

/*
Escreva um algoritmo que recebe três números inteiros e exibe o maior e o
menor deles
*/