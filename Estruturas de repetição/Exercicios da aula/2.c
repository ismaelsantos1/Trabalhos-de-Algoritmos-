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

    int idade, cont=1, genero, salTotal=0, tPessoas, maiorIdade, menorIdade, gMasc=0, gFem=0, gOutro=0, gNinfo=0;
    float salario, mSalario, mSalMasc=0, mSalFem=0, mSalOutr=0, mSalNinfo=0;

    printf("A prefeitura está realizando uma pesquisa com a população");

    do
    {
        printf("Informe seu genêro: \n1. Masculino \n2. Feminino \n3. Outro \n 4. Não informado");
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

        cont += 1; //vai controlar quantas vezes a função dever rodar
        salTotal += salario; //Armazenando os valores dos salários informados
        tPessoas += genero;

        }
        if(salario > 0 && idade > 0){
            //Tirando a média salarial de todos juntos
            mSalario = salTotal / tPessoas;
            idade = maiorIdade;
            idade = menorIdade;
            

            if(genero = 1){
                mSalario = mSalMasc / gMasc;
            } else if(genero )
            if(genero = 2){
                mSalario = mSalFem / gFem;
            }
        }
        

    

    } while(cont<=5);
    
}