#include <stdio.h>

int main() {

  char letra;

  printf("Digite uma letra: ");
  scanf("%c", &letra);

  if (letra == 'a') {
    printf("É uma vogal");
  } else if (letra == 'e') {
    printf("É uma vogal");
  } else if (letra == 'i') {
    printf("É uma vogal");
  } else if (letra == 'o') {
    printf("É uma vogal");
  } else if (letra == 'u') {
    printf("É uma vogal");
  } else {
    printf("É uma consoante");
  }

  return 0;
}

/*
Escreva um algoritmo em C que verifica se um caractere é uma vogal ou uma
consoante e exiba uma mensagem correspondente
*/