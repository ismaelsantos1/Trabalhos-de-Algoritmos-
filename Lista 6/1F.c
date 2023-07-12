#include <stdio.h>

int main() {

  float nSalario, nFilhos, tFilhos = 1, sTotal = 0, tPessoas = 1, nInfo = 1;
  float mSalario, MaiorSalario, pPSalarioDeCem, mFilhos;
  printf("A prefeitura está fazendo uma pesquisa entre os habitantes\n\n\n");

  while (nSalario >= 0) {
    printf("Digite o valor do seu salário: ");
    scanf("%f", &nSalario);
    printf("Digite o número de filhos: ");
    scanf("%f", &nFilhos);

    sTotal += nSalario;
    tPessoas += nFilhos;
    tFilhos += nFilhos;
    nInfo++;
    /*if (nSalario <= 0) {
      mSalario = sTotal/ nInfo;
      mFilhos = tFilhos / nInfo;
      MaiorSalario = sTotal / tPessoas;
      printf("Chechando: %.2f \n\n %.2f \n\n %.2f \n\n %.0f%%", mSalario,
    mFilhos, MaiorSalario, pPSalarioDeCem); break;
    } */
    if (nSalario <= 100) {

      mSalario = sTotal / nInfo;
      mFilhos = tFilhos / nInfo; // aqui eu tiro a media de filhos
      pPSalarioDeCem =
          (sTotal / nInfo) / 100; // percentual de salários até 100 reais
      MaiorSalario = sTotal - mSalario;
      // printf("Chechando: %.2f \n\n %.0f \n\n %.0f%% \n\n %.0f", mSalario,
      // mFilhos, pPSalarioDeCem, MaiorSalario);
      break;
    }
  }
  printf("Resultados da pesquisa: \n\nMedia salarial: R$%.2f\n\n Media de Filhos: %1.f\n\n Percentual de Pessoas com salario abaixo de R$100: %.0f%%\n\n Maior salario: %.2f", mSalario, mFilhos, pPSalarioDeCem, MaiorSalario);
  return 0;
}

/*
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
dados sobre o salário e número de filhos. A prefeitura deseja saber: • média do
salário da população; • média do número de filhos; • maior salário; • percentual
de pessoas com salário até R$100,00. O final da leitura de dados se dará com a
entrada de um salário negativo.
*/