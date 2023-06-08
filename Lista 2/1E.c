/*Ler 3 números inteiros positivos (A,B,C) e calcular o valor da seguinte
  expressão:

  D = R (base1) + S(base2) / 2, onde R = (A + B)^2 e S = (B + C)^2
*/
#include <stdio.h>
#include <math.h>

int main() {

  int a, b, c;
  int base1, base2, expoente;
  int expressao;
  double resultado;
  int r, s;

  printf("\nDigite o valor de A: ");
  scanf("%d", &a);

  printf("\nDigite o valor de B: ");
  scanf("%d", &b);

  printf("\nDigite o valor de C: ");
  scanf("%d", &c);

  expoente = 2;
  base1 = a + b;
  base2 = b + c;
  r = pow(base1, expoente);
  s = pow(base2, expoente);

  resultado = r + s / 2;

  printf("Resultado de %d + %d / 2 é igual a: %.2lf", r, s, resultado);
  
  return 0;
}