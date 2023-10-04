# Início

    fgets(n, 10, stdin); stdin é o dispositivo de entrada padrão.
    fgets pega todos os caracteres que foram armazenados na variável.
        
        puts(n); // ele mostra o que foi armazenado e dá uma quebra de linha.
        puts ("Tchau!"); //funciona como um printf, mas dá uma quebra de linha e não permite pôr uma variável junto.
        tamanho = strlen(n); //strlen vai mostrar o tamanho da string, ou seja, a quantidade de caracteres que tem nela.
        fflush limpa o buffer para não pegar valores já armazenados.

## Função strcmp

        A Função strcmp retorna uma comparação de daus strings, recebe duas strings como argumento e retorna um valor inteiro

            < 0, se string1 < string2
            = 0, se string1 = string2
            > 0, se string1 > string2
        
            Como usar: strcmp(string1, string2);

            Ele usa como critério a ordem alfabética para comparar e só para quando encontra um diferente ou, se não encontrar, ele para quando chegar no final, assim ele irá retornar 0. Se estiver na ordem alfabética, ele irá retornar um valor negativo.

## Função strlen

        |Retorna a quantidade de caracteres de uma string. O terminador nulo não é contado, ou seja, o tamanho  da string deve ser um a mais do que o definido pela função strlen()

        Como usar: 
            strlen(string);

            ex:

            int main(){

                int tam;
                char str[100];

                printf("Digite string: ");
                fgets(str, 100, stdin);

                tam = strlen(str);

                printf("O tamanho da string é: %d", tam);

                return 0;
            }

## Função strcat()

        Concatena duas strings (uma no final da outra). Recebe duas string como argumento e copia a segunda string no final da primeira, sendo que a origem permanece a mesma. 
        Cabe ao programador garantir que a string de destino tenha espaço suficiente para realizar a operação.

        Como usar: 

            strcat(Destino_string, Origem_string);

            ex:

            int main(){

                char nome[14] = "Gabriel";
                char sobrenome[7] = "Manuel";

                /*Garantir que a string destino tenha tamanho suficiente para fazer a operação*/

                strcat(nome, sobrenome);
                puts(nome);

                return 0;
            }

## Função strcpy

        Copia uma string em outra (faz o papel da atribuição de uma string em outra)
        Recebe duas strings como argumento e copia a segunda string na primeira. 

        Como usar: 
            strcpy(Destino_string, ORigem_string);

        ex:

        int main(){

                char str1[20], str2[20], str3[20];

                printf("Digite uma string 1: ");
                fgets(str1, 20, stdin);

                strcpy(str2, str1);
                strcpy(str3, "Você digitou: ");

                puts(str3);

                puts(str2);

                return 0;
            }

### Exercícios:

    1. Criar um programa que receba 3 nomes e apresente-os em ordem alfabética

    2. Criar um programa que mostre quantos caracteres um nome tem(não deve ser contabilizados espaços em branco)