/*
Calcula e escreve a soma dos n primeiros termos da série, com n>3:
*/

#include <stdio.h>

    int main(){

        int n, i=1;
        float result, denominador=1, numerador=1;

        printf("Digite um número maior do que 3: ");
        scanf("%d", &n);

        if(n > 3){
            do{
                //while()
                    /*if(i == 1){
                        printf("\n%.0f/%.0f", numerador, denominador);
                        result += (numerador/denominador);
                    }
                    if(i % 2 == 1 && i != 1){
                        printf(" + %.0f/%.0f", numerador, denominador);
                        result-= (numerador/denominador);
                    }
                    if(i == 2){
                        printf(" %.0f/%.0f", numerador, denominador);
                        result += (numerador/denominador);
                    }
                    if(i % 2 == 0 && i != 2){
                        printf(" - %.0f/%.0f", numerador, denominador);
                        result -= (numerador/denominador);
                    }
                numerador+=1;
                denominador+=2;
                i++;*/

            } while(i <= n);
            printf("\nA soma dos termos é: %.6f", result);
        } else{
            printf("Insira um valor válido.");

        }

        return 0;
    }

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

