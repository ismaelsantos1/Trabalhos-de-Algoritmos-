/*
Uma loja utiliza o código V para transação à vista e P para transação a prazo.
Faça um programa que receba código e valor de n transações, calcule e
mostre:
i) O valor total das compras à vista
ii) O valor total das compras a prazo c.
iii) O valor total das compras efetuadas
iv) O valor da primeira prestação das compras a prazo, sabendo-se que essas
serão pagas em três vezes
*/

#include <stdio.h>

    int main(){

        int cod;
        float comprasP=0, comprasV=0, sum; 
    
        printf("Formas de pagamento disponíveis: \n\nÀ vista: 1\n\nA prazo: 2\n\nFinalizar a operação: 0\n\n");

        for(cod=1; cod>0; sum=0){
            printf("Digite a forma de pagamento: ");
            scanf("%d", &cod);
                switch(cod){
                    case 1:
                        printf("Digite o valor da transação: ");
                        scanf("%f", &sum);
                            if(sum > 0)
                                comprasV += sum;
                        break;

                    case 2:
                        printf("Digite o valor da transação: ");
                        scanf("%f", &sum);
                            if(sum > 0)
                                comprasP += sum;
                        break;
            }
        }
        printf("Esse é o total das compras: \n\nÀ vista: R$%.2f\n\nA prazo: R$%.2f\n\nTotal de compras: %.2f\n\nValor da primeira prestação em 3x: R$%.2f\n\n\nObrigado por comprar conosco. Volte Sempre! <3", comprasV, comprasP, (comprasP + comprasV), (comprasP/3));

        return 0;
    }