#include <stdio.h>

int main() {

  int qtPaes, qtBroa;
  float vPao, vBroa, vTotal, cPoupa;

  printf("Digite a quantidade de pães: ");
  scanf("%d", &qtPaes);

  printf("Digite a quantidade de broa: ");
  scanf("%d", &qtBroa);

  vPao = 0.12;
  vBroa = 1.50;

  vTotal = (qtPaes * vPao) + (qtBroa * vBroa);

  cPoupa = (vTotal * 10) / 100;

  printf("\nA quantidade de pães vendidos foi: %d", qtPaes);
  printf("\nA quantidade de Broas vendidas foi: %d", qtBroa);
  printf("\nO valor total arrecadado foi R$%.2f", vTotal);
  printf("\nO valor que será guardado na poupança é de: R$%.2f", cPoupa);

  return 0;
}

/*
A padaria “Pãozito” vende uma certa quantidade de pães e uma quantidade de
broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final
do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas
(juntos), e quanto deve guardar numa conta de poupança (10% do total
arrecadado). Você foi contratado para fazer os cálculos para o dono. Com base
nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas, e
depois calcular os dados solicitados.
*/