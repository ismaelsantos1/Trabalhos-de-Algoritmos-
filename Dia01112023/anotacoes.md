# Funções Passagem por valor/ referência; Recursividade

## Regras de Escopo para variáveis

    A regra de escopo define o âmbito de validade de variáveis, ou seja, define onde as variáveis e funções são reconhecidas. Em C, uma variável só pode ser usada após ser declarada. Isto por que o processador deve reservar um local da memória para armazenar os valores atribuídos à variável. 

    Porém, o local do programa onde uma variável é declarada define ainda seu escopo de validade. Uma variável pode ser local, global ou formal de acordo com o local de declaração.

### Variáveis locais

    Uma variável é dita local, se for declarada dentro do bloco de uma função. Uma variável local tem validade apenas dentro do bloco onde é declarada, isto significa que podem ser apenas acessadas e modificadas dentro de um bloco. O espaço de memória alocado para esta variável é criado quando a execução do bloco é iniciada e destruído quando encerrado. Dessa forma, variáveis de mesmo nome mas declaradas em blocos distintos, são para todos os efeitos, variáveis distintas.

### Variáveis Formais

    É uma variável local declarada na lista de parâmetros de uma função. Deste modo, tem validade apenas dentro da função onde é declarada, porém serve de suporte para os valores passados pelas funções.
    As variáveis formais na declaração da função e na chamada da função podem ter nomes distintos. A única exigêcia é de que sejam do mesmo tipo. Por serem variáveis locais, os valores que uma função passa para outra não são alterados pela função chamada (passagem de valor).

### Variáveis Globais

    Uma variável é dita global, se for declarada fora do bloco de uma função. Uma variável global tem validade no escopo de todas funções, isto é, pode ser acessada e modificada por qualquer função. 
    O espaço de memória alocado para esta variável é criado no momento de sua declaração e destruído apenas o programa é encerrado

## Passagem de parâmetros por valor

    Um parâmetro formal pode ser recebido por parâmetro ou por referência. Na passagem por valor, uma nova cópia do valor da variável é criada, e enviada para a função. Na passagem por valor, a alteração na cópia da variável não reflete na variável original.

    EX.:

        void porValor(int x){

            x=10;

            printf("Dentro da função 'porValor': %d\n", x);
        }

        void main(){

            int a = 9;
            printf("Antes de chamar a função 'porValor': %d\n", a);
            porValor(a);
            printf("Após chamar função 'porValor': %d\n", a);
        }

## Passagem de parâmetros por referência

    O endereço de memória da variável é enviado como parâmetro para a função.
    Desta forma, se o valor do parâmetro for alterado dentro da função, a variável original também terá seu valor alterado.

    EX.:

        void porReferencia (int *x){
            *x = 10;
            printf("Dentro da funcao 'porReferencia': %d\n",*x);
            }
            void main(){
            int a = 9;
            printf("Apos chamar funcao ‘porReferencia': %d\n",a);
            porReferencia(&a);
            printf("Apos chamar funcao 'porReferencia': %d\n",a);
        }

        MATRIZES e VETORES são sempre passados por referência.

        void vetores(int x[]){
            x[0] = 10;
            printf("Dentro da funcao 'vetores': %d\n",x[0]);
            }
            void main(){
            int x[3];
            x[0]=9;
            vetores(x);
            printf("Apos chamar funcao 'vetores': %d\n",x[0]);
        }

        EX - PASSANDO VETORES COMO PARÂMETRO

        #include <stdlib.h>
        #define TAM 5
            int somaVetor( int v[]){
                int soma=0,i;
                for (i=0; i<TAM; i++)
                soma+=v[i];
                return soma;
            }

            int main(){
                int x[TAM]={1,2,3,4,5};
                int r;
                r = somaVetor(x);
                printf("A soma dos numeros contidos no vetor eh %d",r);
            }

        EX - PASSANDO MATRIZES BIDIMENSIONAIS COMO PARÂMETRO

            #include <stdlib.h>
            #define LIN 5
            #define COL 3
            
            int somaColuna( int v[][COL],int c){
                int soma=0,i;
                for (i=0; i<LIN; i++)
                soma+=v[i][c];
                return soma;
            }
            int main(){
                int x[LIN][COL]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
                int r,col;
                printf("Digite o indice da coluna que você deseja somar: ");
                scanf("%d",&col);
                r = somaColuna(x,col);
                printf("A soma dos numeros contidos na coluna %d eh %d", col, r);
            }

## PASSAGEM DE PARÂMETROS - STRUCT

    Estruturas heterogêneas são passadas por valor, exceto se estiverem contidas em um vetor.

    EX.: 

    #include <stdio.h>
    struct Pessoa{
        char nome[30];
        int idade;
    
    };
    void imprimePessoa(struct Pessoa x){
    
    printf("%s - %d",x.nome,x.idade);
    
    }
    int main(){
        struct Pessoa p = {"Maria",23};
        imprimePessoa(p);
    }

    ex.: PASSANDO VETOR DE STRUCT COMO PARÂMETRO

    #include <stdio.h>
    struct Pessoa{
        char nome[30];
        int idade;
    };

    int somaIdades(struct Pessoa y[]){
        int i,soma=0;
        for(i=0;i<2;i++)
        soma += y[i].idade;
        return soma;
    }
    int main(){
        struct Pessoa v[]= {{"Joao",31},s{"Francisco",27} };
        printf("\nA soma das idades eh: %d", somaIdades(v));
    }

# Recursividade

    A recursividade é uma das mais importantes vantangens do uso de funções em C. A Recursão é o processo pelo qual uma função chama a si mesma repetidamente um número FINITO de vezes.

    O uso de recursividade geralmente torna o algoritmo mais intuitivo.

    Um exemplo clássico seria o cálculo do fatorial de um número. A definição fatorial é:
    n! = n x (n-1) x (n-2) x ... x 3 x 2 x 1 , n é um inteiro positivo
    0! = 1 (caso básico).

    Uma propriedade (facilmente verificável) dos fatoriais é que:

        n! = n.(n-1)!
    
    >>>Uma função recursiva deve ter sempre um caso básico, para encerrar a recursividade<<< Caso contrário, a recursão será infinita e provavelmente ocasionará estouro de memória.

    No caso caso do fatorial, o caso básico é o fatorial de 0 e 1 (ambos igual a 1).

    EX - FATORIAL

    int fatorial(int x){
        if (x == 0 || x == 1)
            return 1;
        else
            return (x*fatorial(x-1));
    }

    int main(){
        int x;
        x = fatorial(5);
        printf (“O factorial de 5 eh %d”,x);
    }