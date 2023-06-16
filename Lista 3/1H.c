/*
Escreva um algoritmo em C que verifica se uma data é válida, levando em
consideração dia, mês e ano.
*/

#include <stdio.h>

#include <stdio.h>

int main(void) {

  int dia, ano, bissexto;
  int mes;

  printf("Digite um dia: ");
  scanf("%d", &dia);

  printf("Digite um mês: ");
  scanf("%d", &mes);

  printf("Digite um ano: ");
  scanf("%d", &ano);

  /*int bissexto (ano){
    if ((ano % 4 == 0 && ano % 100 != 0)|| (ano % 400 == 0) && (mes == 2 && dia <= 29)){
      
    }
  }*/

    if (mes == 2 && dia <= 28) {
        printf("Dia do mês %d e do ano %d é válido", mes, ano);
    
    } else if((ano % 4 == 0 && ano % 100 != 0)|| (ano % 400 == 0) && (mes == 2 && dia <= 29)){
        printf("O dia %d do mês %d do ano %d é válido", dia, mes, ano);
    
    } else if (mes == 2 && dia > 28) {
        printf("O dia %d do mes %d não é válido", dia, mes);
    
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia <= 30) {
        printf("Dia %d do mês %d e do ano %d é válido", dia, mes, ano);
    
    } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && dia <= 31) {
        printf("O dia %d do mês %d e do ano %d é válido", dia, mes, ano);
    }

    return 0;
}

/*
Escreva um algoritmo em C que verifica se uma data é válida, levando em
consideração dia, mês e ano.
*/