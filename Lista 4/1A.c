#include <stdio.h>

int main() {

  int a, b, aDivb;

  printf("Digite um número inteiro: \n");
  scanf("%d", &a);

  printf("Digite um segundo número inteiro: \n");
  scanf("%d", &b);

  if (a % b == 0) {
    printf("O número A é divisível por B");
  } else {
    printf("O número A e o número B não são divisíveis");
  }

  return 0;
}

/*
Faça um algoritmo para ler dois números inteiros A e B e informar se A é
divisível por B.
*/