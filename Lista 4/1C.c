#include <stdio.h>

int main() {

  float x, y, z, media, faltas;
  int aulas;
  char nome[50];

  printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("\nDigite a primeira nota: ");
  scanf("%f", &x);

  printf("\nDigite a segunda nota: ");
  scanf("%f", &y);

  printf("\nDigite a terceira nota: ");
  scanf("%f", &z);

  printf("\n Digite a quantidade de aulas que você frequentou: ");
  scanf("%d", &aulas);

  media = (x + y + z) / 3;
  faltas = 80 - aulas; // só faltar 20 aulas

  if (media >= 7 && faltas < 20) {
    printf("%s, você está aprovado", nome);
  } else if (media >= 7 && faltas > 20) {
    printf("%s, você está reprovado pois excedeu a quantidade máxima de faltas",
           nome);
  } else if (media <= 7 && faltas < 20) {
    printf("%s, você está reprovado por média", nome);
  }
  return 0;
}

/*
Faça um algoritmo para ler o nome, as três notas e o número de faltas de um
aluno e escrever qual a sua situação final: Aprovado, Reprovado por Falta ou
Reprovado por Média. A média para aprovação é 7,0 e o limite de faltas é 25%
do total de aulas. O número de aulas ministradas no semestre foi de 80. A
reprovação por falta sobrepõe a reprovação por Média
*/