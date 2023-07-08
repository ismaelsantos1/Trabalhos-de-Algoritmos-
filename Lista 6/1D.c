#include <math.h>
#include <stdio.h>

int main() {

  int x, i = 1, y;

  printf("Digite um valor inteiro: ");
  scanf("%d", &x);

  printf("Digite um segundo valor inteiro: ");
  scanf("%d", &y);

  while (y >= 1) {

    i *= x;

    y--;
  }

  printf("O valor de X elevado a Y é igual a: %d", i);

  return 0;
}

/*
Ler 2 valores inteiros e positivos: X e Y, calcular e escrever o valor de X^Y
*/