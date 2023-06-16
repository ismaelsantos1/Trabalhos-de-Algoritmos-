#include <stdio.h>

int main() {

  int qtSolicitada, c100, c50, c20, c10, c5, c2, c1;

  printf("Digite o valor necessário: ");
  scanf("%d", &qtSolicitada);

  c100 = qtSolicitada / 100;
  c50 = (qtSolicitada % 100) / 50;
  c20 = (qtSolicitada % 50) / 20;
  c10 = (qtSolicitada % 20) / 10;
  c5 = (qtSolicitada % 10) / 5;
  c2 = (qtSolicitada % 5) / 2;
  c1 = (qtSolicitada % 2) / 1;

  printf("Você quer imprimir um quantia de %d .", qtSolicitada);
  printf(
      "\nSerão: \n %d de R$100 \n %d de R$50 \n %d de R$20 \n %d de R$10 \n %d "
      "de R$5 \n %d R$2 \n %d R$1",
      c100, c50, c20, c10, c5, c2, c1);
  /*printf("");
  printf("");
  printf("");*/

  return 0;
}

/*
int main()
{
  int valor, Cde100, Cde50, Cde20, Cde10, Cde5, Cde2;

  printf("Digite o quanto você quer retirar: \n");
  scanf("%d", &valor);

  Cde100 = (valor/100);
  Cde50 = (valor - (Cde100 * 100))/50;
  Cde20 = (valor - ((Cde100 * 100) + (Cde50 * 50)))/20;
  Cde10 = (valor - ((Cde100 * 100) + (Cde50 * 50) + Cde20 * 20))/10;
  Cde5 = (valor - ((Cde100 * 100) + (Cde50 * 50) + (Cde20 * 20) + (Cde10 *
10)))/5; Cde2 = (valor - ((Cde100 * 100)+ (Cde50 * 50) + (Cde20 * 20) + (Cde10 *
10) + (Cde5 * 5)))/2;

  printf("Você quer retirar %d, e serão %d nota(s) de 100, %d nota(s) de 50, %d
nota(s) de 20, %d nota(s) de 10, %d nota(s0 de 5, %d nota(s) de 2.", valor,
Cde100, Cde50, Cde20, Cde10, Cde5, Cde2);

  return 0;
}

*/

/*
Um programa para gerenciar os saques de um caixa eletrônico deve possuir
algum mecanismo para decidir o número de notas de cada valor que deve ser
disponibilizado para o cliente que realizou o saque. Um possível critério seria
o da "distribuição ótima" no sentido de que as notas de menor valor fossem
distribuídas em número mínimo possível. Por exemplo, se a quantia solicitada
fosse R$ 87,00, o programa deveria indicar uma nota de R$ 50,00, três notas de
R$ 10,00, uma nota de R$ 5,00 e uma nota de R$ 2,00. Escreva um programa
que receba o valor da quantia solicitada e retorne a distribuição das notas de
acordo com o critério da distribuição ótima. O caixa conta com notas de R$
50, R$ 20, R$ 10, R$ 5, R$ 2 e R$ 1
*/