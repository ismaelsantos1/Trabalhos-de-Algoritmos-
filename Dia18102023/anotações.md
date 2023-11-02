# Anotações sobre funções
    Funções, ou sub-programas, são segmentos de programa que executam uma determinada tarefa específica. Por exemplo, as funções de biblioteca (como sqrt(), pow(), getch() e printf()).

    Para além dessas funções, é permitido ao programador escrever suas próprias rotinas. Essas são chamadas de funções de usuário, podendo assim segmentar um programa grande em vários programas menores. Facilitando ou descomplicando o programa.

    Essa segmentação é chamada de modularização e permite que cada segmento seja  escrito e testado individualmente. Permite ainda que umm programa possa ser escrito por vários programadores ao mesmo tempo, cada um escrevendo um segmento separado.

## Declaração de uma função

    //tipo de função (float) e há dois parâmetros de entrada dentro da função
    float media2 (float a, float b){

        //uma variável que foi declarada localmente
        float med;
        med = (a + b)/ 2.0;

        //termina a execução da função e retorna o valor de med para o programa que a chamou
        return (med);
    }

    Depois que essa função for definida, ela pode ser chamada dentro de uma função principal.

    void main(){

        float num_1, num_2, medi;

        puts("Digite dois números: ");
        scanf("%f %f", &num_1, &num_2) // aqui a função criada acima é chamada
        printf("\nA media destes números é %f", medi);
    }

### Localização das Funções

        No mesmo arquivo depois do programa principal

        ex.:
                void main(){ // programa principal

                    tipo nomef(...) // protótipo da função
                    ... 
                    var = nomef(...) //chamada da função
                }

                tipo nomef(...){ //definição da função

                        [corpo da função]
                }

    Existem algumas posições possíveis para escrevermos o corpo de uma função:

    No mesmo arquivo do programa principal
        Antes do programa principal
        Depois do programa principal
    Em arquivo separado (biblioteca)

    No mesmo arquivo antes do programa principal.
    Sitaxe: Uma função escrita antes do programa principal:

        tipo nomef(...){ //definição da função

            [corpo de função]
        }

        void main(){ //programa principal
            ...

            var = nomef(...) //chamada da função
            
            ...
        }


        DEPOIS DO PROGRAMA PRINCIPAL

        void main(){

            float media2 (float, float);

            float num_1, num_2, med;

            puts("Digite dois números: ");
            scanf("%f %f", &num_1, &num_2);

            medi = media2(num_1, num_2);
            printf("\nA media destes números e %f", medi);
        }

        float media2(float a, float b){

            float med;
            med = (a + b) / 2.0;
            return (med);
        }

#### Hierarquia entre Funções

    Sempre será possível que um programa principal chame uma função que por sua vez chame outra função...e assim sucessivamente. Quando isto acontece, dizemos que a função que chama possui uma hierarquia maior (ou superior) a função chamada. Quando isso ocorre, devemos ter o cuidado de definir (ou incluir) as funções em ordem crescente de hierarquia, isto é, uma função chamada é escrita antes de uma função chamadora.

#### Exercícios

        Implemente uma função que recebe por parâmetro o raio de uma
    esfera e retorne o seu volume (volume = 4/3*Pi *Raio*Raio*Raio)
    • Implemente uma função que calcule um número inteiro elevado a
    uma determinada potência, isto é, a função deve receber a base e o
    expoente e retornar o resultado.
    ●
    • Implemente uma função que receba a média final de um aluno por
    parâmetro e retorna o caractere equivalente ao seu conceito,
    conforme abaixo:
    •
    •
    •
    •
    0,0 a 4,9 = Conceito 'D'
    5,0 a 6,9 = Conceito 'C'
    7,0 a 8,9 = Conceito 'B'
    9,0 a 10,0 = Conceito 'A’
