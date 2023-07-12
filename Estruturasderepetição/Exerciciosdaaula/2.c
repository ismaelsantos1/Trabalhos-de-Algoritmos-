/*
Foi feita uma pesquisa entre os habitantes de uma região. Foram
coletados os dados de idade, gênero (1- Masculino/ 2 - Feminino/ 3 –
Outro/ 4 – Não Informado) e salário. Faça um algoritmo que informe:
a) a média de salário do grupo;
b) maior e menor idade do grupo;
c) a média salarial por categoria de gênero;
*/
#include <stdio.h>

int main(){

    int idade, cont=1, genero, salTotal=0, tPessoas, maiorIdade=0, menorIdade=122, gMasc=0, gFem=0, gOutro=0, gNinfo=0;
    float salario, mSalario, mSalMasc=0, mSalFem=0, mSalOutr=0, mSalNinfo=0;

    printf("A prefeitura está realizando uma pesquisa com a população");

    do
    {
        printf("\n\nInforme seu genêro: \n1. Masculino \n2. Feminino \n3. Outro \n4. Não informado\n");
        scanf("%d", &genero);
        switch (genero)
        {
        case 1:
            printf("Digite sua idade: ");
            scanf("%d", &idade);

            printf("Digite seu salário: ");
            scanf("%f", &salario);

            mSalMasc += salario;
            gMasc++;
            break;
        
        case 2: 

            printf("Digite sua idade: ");
            scanf("%d", &idade);

            printf("Digite seu salário: ");
            scanf("%f", &salario);

            mSalFem += salario;
            gFem++;
            break;

        case 3:
            printf("Digite sua idade: ");
            scanf("%d", &idade);

            printf("Digite seu salário: ");
            scanf("%f", &salario);

            mSalOutr += salario;
            gOutro++;
            break;

        case 4: 
            printf("Digite sua idade: ");
            scanf("%d", &idade);

            printf("Digite seu salário: ");
            scanf("%f", &salario);

            mSalNinfo += salario;
            gNinfo++;

        default:
            printf("Digite um valor válido");
            break;

        
        
        if(salario > 0 /*&& idade > maiorIdade*/){
            //Tirando a média salarial de todos juntos
            mSalario = salTotal / tPessoas;
            if(idade  > maiorIdade){
            maiorIdade = idade;
            }
                if(genero == 1){
                    mSalario = mSalMasc / gMasc;
                } else if(genero )
                if(genero == 2){
                    mSalario = mSalFem / gFem;
                }
                if(genero == 3){
                    mSalNinfo = mSalNinfo / gNinfo;
                }
                if(genero == 4){
                    mSalOutr = mSalOutr / gOutro;
                }
            } else if(salario > 0 && idade < menorIdade){
                menorIdade = idade;
            }
            }

    cont += 1; //vai controlar quantas vezes a função dever rodar
        salTotal += salario; //Armazenando os valores dos salários informados
        tPessoas += genero;
        
    } while(cont<=2); //aqui eu controlo quantas vezes a função irá rodar
    
    printf("O resultado da pesquisa é: \n\n%.2f \n\n%d \n\n%d \n\n%.2f \n\n%.2f \n\n%.2f \n\n%.2f", mSalario, maiorIdade, menorIdade, mSalMasc, mSalFem, mSalNinfo, mSalOutr);

    return 0;
}