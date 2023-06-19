#include <stdio.h>
#include <math.h>
int main() {

  int a, b, c, delta, expo, raiz1, raiz2, raizDelta; 
    
  printf("Digite o valor do coeficiente A: ");
  scanf("%d", &a);

  printf("Digite o valor do coeficiente B: ");
  scanf("%d", &b);

  printf("Digite o valor do coeficiente C: ");
  scanf("%d", &c);


  delta = pow(b, 2) + ((-4) * a * c);
  raizDelta = sqrt(delta);
  raiz1 = (-b + raizDelta)/(2 * a);
  raiz2 = (-b - raizDelta)/(2 * a);

  if(delta > 0){
    printf("Delta possui duas raízes, sendo elas: x1 = %d \n x2 = %d", raiz1, raiz2);
    
  } else if(delta == 0){
    printf("Delta possui apenas uma raiz x1 = %d", raiz1);
  } else{
    printf("Não existem raízes reais para o valor de delta");
  }
  
  return 0;
}

/*
Escreva um programa que pergunte os coeficientes de uma equação de segundo
grau (A, B e C) e:
§ se DELTA for maior que zero: imprima duas raízes;
§ se DELTA for igual a zero: imprima apenas a única raiz existente;
§ se DELTA menor que zero: imprima a mensagem “NÃO EXISTEM RAÍZES
REAIS”. 
*/