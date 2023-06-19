#include <stdio.h>

int main() {

  float qtLata, largura, altura, mQuadrado, consumoTinta;

  printf("Digite a largura da parede em metros: ");
  scanf("%f", &largura);

  printf("\nDigite a altura da parede em metros: ");
  scanf("%f", &altura);

  mQuadrado = largura * altura;
  consumoTinta = mQuadrado * 0.3;
  qtLata = consumoTinta / 2; // para saber quantas latas irei usar é preciso
                             // pegar o consumo de tinta que vou ter e dividir
                             // pela quantidade de litros que vem em cada lata

  printf("\nA quantidade necessária de latas de tinta para uma parede que mede "
         "%.0fx%.0fm é de %.1f latas",
         largura, altura, qtLata);

  return 0;
}

/*
Faça um programa que calcule a quantidade necessária de latas de tinta para
pintar uma parede. O programa pergunta as medidas de largura e altura da parede
em metros e imprime o resultado (em latas de tinta). Considere que o consumo de
tinta é de 300 ml por metro quadrado e a quantidade de tinta por lata é de 2
litros
*/