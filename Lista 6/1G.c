#include <stdio.h>

int main() {
  
  int dMaximo;
  float res = 0, dI = 1, numerador = 1;
  printf("Digite o valor máximo de divisões: ");
  scanf("%d", &dMaximo);
  if (dMaximo > 0) {
    while (dI <= dMaximo) {
      printf(" %.0f/%.0f + ", numerador, dI);
      res += (numerador / dI); 
      numerador += 2; //seguindo como estava no enunciado, o valor aumenta de 2 em 2
      dI += 1; // vai incrementar até que o valor seja igual ao dMaximo (máximo de divisões); esse fica no denominador 
    }
    printf("\n\n O resultado é: %.2f", res);
  } 
  
  return 0;
}

/*
Calcula e escreve a soma dos n primeiros termos da série:
soma=1/1 + 3/2 +5/3+7/4+...
*/