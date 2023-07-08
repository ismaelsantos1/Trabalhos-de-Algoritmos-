#include <stdio.h>

int main() {

    int num1, rest1, rest2, rest3, rest4, binario;

    printf("Digite um número decimal: ");
    scanf("%d", &num1);

    rest1 = num1 % 2;
    rest2 = (num1 / 2) % 2;
    rest3 = (num1 / 2) % 2;
    rest4 = (num1 / 4) % 2;

    printf("A conversão do número %d em binário é: %d %d %d %d", num1, rest4,
        rest3, rest2, rest1);

    return 0;
}

/*
Para converter um número decimal em binário basta dividir
                sucessivamente o número decimal por 2 guardando o resto
                da divisão.
                Exemplo: 8 (num1)
                resto de 8 por 2 = 0
                8 / 2 = 4
                resto de 4 por 2 = 0
                4 / 2 = 2
                resto de 2 por 2 = 0
                2 / 2 = 1
                resto de 1 por 2 = 1
                1 / 2 = 0
                FIM
                Por último é só pegar do último resto pro primeiro
                8 em binário é 1000
*/