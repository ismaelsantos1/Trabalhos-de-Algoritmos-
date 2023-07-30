#include <stdio.h>

int main() {

  int nValores = 1,nPosi = 0, nNega = 0, tValores = 0, vGeral = 0;
  float pPosi, pNega;

  printf("Digite valores quaisquer, e para parar de enviar valores, digite '0'\n\n");

  while (nValores != 0) {

    printf("Digite um valor: ");
    scanf("%d", &nValores);

    tValores += nValores;

    if (nValores > 0) {
      nPosi += 1;
      vGeral += 1;
      // printf("Vê se tá funcionando \n %d \n %d\n", nPosi, vGeral);
    } else if (nValores < 0) {
      nNega += 1;
      vGeral += 1;
      // printf("Vê se tá funcionando \n %d \n %d\n", nNega, vGeral);
    }
  }

  tValores /= vGeral; // tValores é o somatório dos valores de entrada
  pPosi = (nPosi * 100) / vGeral;
  pNega = (nNega * 100) / vGeral;

  printf("A média aritmética dos valores inseridos é: %d\n\n A quantidade de valores positivos é igual a: %d \n\n A quantidade de valores negativos é igual a: %d\n\n O percentual de valores positivos é: %.1f%% \n\n O percentual de valores de negativos é: %.1f%%\n\n", tValores, nPosi, nNega, pPosi, pNega);

  return 0;
}
/*
Ler um número não determinado de valores, calcular e escrever a média
aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de
valores negativos e o percentual de valores negativos e positivos. O usuário
deverá digitar o número “0” para encerrar a entrada dos dados.
*/