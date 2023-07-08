#include <stdio.h>

int main() {

  float a, b, inter1, inter2;
  float exp1, exp2, exp3, exp4, intervalo;

  printf("\nDigite o valor de A: ");
  scanf("%f", &a);

  printf("Digite o valor de B: ");
  scanf("%f", &b);

  intervalo = b - a; // assim poderá ser encontrado o intervalo

  inter1 = a + intervalo / 3;
  inter2 = b - intervalo / 3;
  // aqui já tenho os 4 pontos

  exp1 = (3 * a + 1) / 2;
  exp2 = (3 * b + 1) / 2;
  exp3 = (3 * inter1 + 1) / 2;
  exp4 = (3 * inter2 + 1) / 2;

  printf("\nOs pontos %.0f, %.0f, %.0f, %.0f", a, inter1, inter2, b);
  printf("\nOs pontos do intervalo são: %.1f %.1f %.1f %.1f", exp1, exp3, exp4, exp2);
}