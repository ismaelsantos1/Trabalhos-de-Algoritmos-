#include <stdio.h>

int main() {

  int num1;

  printf("Digite um valor: \n");
  scanf("%d", &num1);

  if (num1 % 2 == 0 && num1 < 0) {
    printf("É um número par e negativo");
  } else if (num1 % 2 == 0 && num1 > 0) {
    printf("É um número par e positivo");
  } else if (num1 % 2 != 0 && num1 < 0) {
    printf("É um número ímpar e negativo");
  } else {
    printf("É um número ímpar e positivo");
  }

  return 0;
}

/*
Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando
se este número é par ou ímpar, e se é positivo ou negativo.
*/