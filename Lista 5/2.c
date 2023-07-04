#include <math.h>
#include <stdio.h>
int main() {

  int binario, rest1, rest2, rest3, rest4, rest5, decimal, resultado, potencia;

  printf("Digite um número binário qualquer com até 5 dígitos: ");
  scanf("%d", &binario);

  rest1 = binario % 100000 / 10000;
  rest2 = binario % 10000 / 1000;
  rest3 = binario % 1000 / 100;
  rest4 = binario % 100 / 10;
  rest5 = binario % 10 / 1;

  decimal = (rest5 * 1) + (rest4 * 2) + (rest3 * 4) + (rest2 * 8) +
            (rest1 * 16); // por exemplo: 2^0 = 1 (logo a primeira posição será
                          // multiplicado por 1) e assim em diante
  printf("O esultado da conversão do número %d para decimal é: %d", binario, decimal);
  return 0;
}
/*
se multiplica cada bit pela potência de sua posição
*/