/*
Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados
de altura e sexo (1=masculino, 2=feminino, 3=outro) das pessoas. Faça um
programa que leia 50 dados diferentes e informe:
• a maior e a menor altura encontradas;
• a média de altura das mulheres;
• a média de altura da população;
• o percentual de homens na população.
*/

#include <stdio.h>

int main(){

    int  altura, sexo, maiorAlt, pop=1, AltMaior=0, AltMenor=200, mulher=0, homens=0,altPop,cont=1; //cont é uma variável contadora
    double mAltPop, pHomens, altMulher;

    printf("Uma pesquisa está sendo feita, responda às seguintes perguntas:\n\n");

    do{
        printf("Informe seu sexo: \n1. Feminino;\n2. Masculino;\n3. Outro\n");
        scanf("%d", &sexo);
        switch (sexo){

        case 1:   
            printf("Digite sua altura em centímetros: ");
            scanf("%d", &altura);

            if(altura < AltMenor){
                AltMenor = altura; //Essa será a menor altura
            }
            if(altura > AltMaior){
                AltMaior = altura;
            }
            mulher++;
            altMulher+= altura; //somando a quantidade 
            pop++;
            altPop += altura;
            break;

        case 2: 

            printf("Digite sua altura em centímetros: ");
            scanf("%d", &altura);
            
            if(altura > AltMaior){
                AltMaior = altura;
            }
            if(altura < AltMenor){
                AltMenor = altura;
            }
            pop++;
            homens++;
            altPop += altura;
            break;

        case 3:

            printf("Digite sua altura em centímetros: ");
            scanf("%d", &altura);

            if(altura > AltMaior){
                AltMaior = altura;
            }
            if(altura < AltMenor){
                AltMenor = altura;
            }
            pop++;
            altPop+= altura;
            break;
        default:
            printf("Valor inválido. O programa será fechado");
            break;
        }
        mAltPop = altPop / pop;
        pHomens = ((homens/pop) * 100);
        cont++;
    } while(cont <=5);

    printf("O resultado da pesquisa é: \n\nMaior altura: %d\nMenor altura: %d\nMédia de altura das mulheres: %.2f\nMédia de altura da população: %.0lf\nPercentual de homens da população: %.0lf%%", AltMaior, AltMenor, altMulher/mulher, mAltPop,pHomens);
    return 0;
}