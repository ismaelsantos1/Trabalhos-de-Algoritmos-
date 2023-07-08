/*
Escreva algoritmos que resolvam os seguintes problemas:

a) Ler um número n e imprimir a informação se ele é primo ou não.
*/

#include <stdio.h>

int main() {

  int n, i = 1, cont = 0, result;
  printf("Digite um valor: ");
  scanf("%d", &n);

  while (n >= i) {

    if (n % i == 0) {
      cont++;
    }
    i++;
  }
  if (cont == 2) {
    printf("É um número primo");
  } else {
    printf("Não é primo");
  }

  return 0;
}