#include <stdio.h>

int main(void) {

  int idade;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  if (idade == 5 || idade == 6 || idade == 7) {
    printf("Categoria infantil A");
  } else if (idade == 8 || idade == 9 || idade == 10) {
    printf("Categoria infantil B");
  } else if (idade == 11 || idade == 12 || idade == 13) {
    printf("Categoria juvenil A");
  } else if (idade == 14 || idade == 15 || idade == 16 || idade == 17) {
    printf("Categoria juvenil B");
  } else {
    printf("Categoria Adulto");
  }

  return 0;
}

/*
Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das
seguintes categorias e mostra para o usuário essa informação:
infantil A = 5 - 7 anos
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = maiores de 18 anos
*/