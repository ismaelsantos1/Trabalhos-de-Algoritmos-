#include <stdio.h>

int main() {

  int n, i = 1, resultado, m = 1;

  printf("Digite um valor para saber sua tabuada de multiplicação: ");
  scanf("%d", &n);

  while (i <= 10) {
    resultado = n * m;
    printf("%d * %d = %d\n\n", n, m, resultado);
    m += 1;
    i += 1;
  }
  return 0;
}

/*
Ler um valor para uma variável N de 1 a 10 e calcular a tabuada de multiplicação
de N. Mostre a tabuada na forma:
0 x N = 0
1 x N = 1N
2 x N = 2N
*/