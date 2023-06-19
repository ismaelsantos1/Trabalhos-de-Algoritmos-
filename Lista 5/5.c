#include <stdio.h>

int main(void) {

  int a1, a2, a3, a4, PA, resultado, n, r, posi;

  printf("Digite o primeiro termo: ");
  scanf("%d", &a1);

  printf("Digite o termo N: ");
  scanf("%d", &n);

  printf("Digite a razão: ");
  scanf("%d", &r);

  posi = n - 1;
  PA = a1 + r;
  a2 = a1 + 2 * r;
  a3 = a1 + 3 * r;
  a4 = a1 + 4 * r;

  resultado = PA + a4 / 2;
  printf("A PA é %d %d %d %d ", PA, a2, a3, a4);
  printf("\nO N-ésimo termo da PA é %d", resultado);
  return 0;
}

/*
Faça um programa que leia o primeiro termo de uma Progressão Aritmética (PA),
sua razão, um número N e, a seguir, calcule e mostre o N-ésimo termo da PA.
N-ésimo termo é aquele da posição em que foi colocado N
*/