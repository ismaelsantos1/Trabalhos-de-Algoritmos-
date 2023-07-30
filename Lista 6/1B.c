/*
Ler a altura de 15 pessoas, calcular e mostrar :
• A menor altura do grupo;
• A maior altura do grupo;
*/

#include <stdio.h>

int main() {

  int altMenor = 1000, altMaior = 0, altura, i = 1;

  while (i <= 5) {

    printf("Digite sua altura: ");
    scanf("%d", &altura);

    if (altura < altMenor) {

      altMenor = altura;
    }
    if (altura > altMaior) {

      altMaior = altura;
    }
    i++;
  }
  printf("\n\nA maior altura é: %d\nA menor altura é: %d\n", altMaior, altMenor);
  return 0;
}