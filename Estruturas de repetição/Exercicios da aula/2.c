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

    int idade, cont=1, genero, salTotal=0, tPessoas;
    float salario, mSalario, maiorIdade, mSalPCat;

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

            break;
        
        case 2: 

            printf("Digite sua idade: ");
            scanf("%d", &idade);

            printf("Digite seu salário: ");
            scanf("%f", &salario);
            break;

        case 3:
            printf("Digite sua idade: ");
            scanf("%d", &idade);

            printf("Digite seu salário: ");
            scanf("%f", &salario);

        case 4: 
            printf("Digite sua idade: ");
            scanf("%d", &idade);

            printf("Digite seu salário: ");
            scanf("%f", &salario);

        default:
            printf("Digite um valor válido");
            break;

        salTotal += salario; //Armazenando os valores dos salários informados
        tPessoas += genero;
        }
        if(salario > 0 ){
            //Tirando a média salarial de todos juntos
            mSalario = salTotal / tPessoas;

        }
        

    

    } while;
    
}