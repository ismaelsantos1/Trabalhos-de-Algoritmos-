#include <stdio.h>

int main() {

  int centena, dezena, unidade, n1, rest1, rest2;

  printf("Digite um número inteiro: ");
  scanf("%d", &n1);

  centena = n1 / 100;
  rest1 = n1 % 100;

  dezena = rest1 / 10;
  rest2 = rest1 % 10;
  unidade = rest2;

  printf("\nA centena de %d é: %d", n1, centena);
  printf("\nA dezena de %d é: %d", n1, dezena);
  printf("\nA unidade de %d é: %d", n1, unidade);

  return 0;
}

/*
Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte
forma:
CENTENA = x DEZENA = y UNIDADE = z
*/