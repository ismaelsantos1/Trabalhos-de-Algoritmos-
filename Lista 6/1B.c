/*
Ler a altura de 15 pessoas, calcular e mostrar :
• A menor altura do grupo;
• A maior altura do grupo;
*/

#include <stdio.h>

int main() {

  int altMenor = 1000, altMaior = 0, altura, p = 1;

  while (p <= 5) {

    printf("Digite sua altura: ");
    scanf("%d", &altura);

    if (altura < altMenor) {

      altMenor = altura;
    }
    if (altura > altMaior) {

      altMaior = altura;
    }
    p++;
  }
  printf("A maior altura é: %d\n", altMaior);
  printf("A menor altura é: %d\n", altMenor);
  return 0;
}