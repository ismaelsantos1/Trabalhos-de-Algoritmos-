#include <stdio.h>

int main(void) {

  int a, b, menorVal, maiorVal;

  printf("Digite um valor: ");
  scanf("%d", &a);

  printf("Digite outro valor: ");
  scanf("%d", &b);

  menorVal = a;
  maiorVal = b;

  if (menorVal > maiorVal) {
    printf("A ordem crescente dos valores informados é: %d, %d", maiorVal,
           menorVal);
  } else {
    printf("A ordem crescente dos valores informados é: %d, %d", menorVal,
           maiorVal);
  }

  return 0;
}

/*
Faça um algoritmo para ler duas variáveis inteiras A e B e garantir que A e B
fiquem em ordem crescente, ou seja, a variável deverá armazenar o menor valor
fornecido e a variável B o maior.
*/