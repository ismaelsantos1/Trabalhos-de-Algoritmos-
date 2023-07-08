#include <stdio.h>

int main() {

  double num1;

  printf("Digite um número qualquer: \n");
  scanf("%lf", &num1);

  if (num1 == 0) {
    printf("O número digitado é igual a 0");
  } else if (num1 > 0) {
    printf("É um número positivo");
  } else {
    printf("É um número negativo");
  }

  return 0;
}

/*
Escreva um algoritmo em C que verifica se um número é positivo, negativo ou
zero e exiba uma mensagem correspondente.
*/