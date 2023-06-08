#include <stdio.h>

int main(){

  int num1;

  printf("Digite um valor: \n");
  scanf("%d", &num1);
  
  if(num1 % 2 == 0){
    printf("É um número par");
  } else{
    printf("É um número ímpar");
  }
  
  
  
  
  return 0;
}



/*
Escreva um algoritmo em C que verifica se um número é par ou ímpar e exiba
uma mensagem correspondente.
*/