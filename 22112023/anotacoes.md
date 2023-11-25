# Ponteiros

## Endereços de memória

    Todos os dados usados num programa, normalmente representados por variáveis, ocupam espaço na memória do computador. 

    !!Importante lembrar que uma sequência de bytes é o que forma a memória de computador.
    
    Cada byte pode armazenar um número inteiro entre 0 e 255, e cada byte na memória é identificado por seu endereço numérico, independente do conteúdo.

    Ex:

        Endereço            Memória

        0x0022FF16          0000 0001
        0x0022FF17          0001 1001
        0x0022FF18          0101 1010

    Cada objeto declarado irá ter um endereço na memória do equipamento.
    → Podem ocupar mais memória que outro objeto, ou não.
    → Cada endereço terá o mesmo tamanho.

    Por exemplo: Uma variável do tipo char é um vetor de caracteres. Cada vetor ocupa 1 byte da memória. Sendo assim, se essa variável do tipo char str1 tem um vetor de tamanho 4, ela ocupara 4 bytes na memória. → char str1[4] = 4 bytes.

    Da mesma forma que uma variável do tipo float com nome "real" ocupará 16 bytes na memória. Isso porque uma variável float ocupa um tamanho de 4 bytes na memória, se integrar nela um vetor de TAM = 4, o espaço ocupado será multiplicado. → float real[4] = 16 bytes.

    Para acessar um endereço de memória pertencente a uma variável, é usado o operador "&".
    
    Ex:
        ~~~C

            int x = 100;
            printf("Valor de x = %d\n", x);
            printf("Endereço de x = %x\n", &x);
            
        ~~~

## Ponteiro

    Ponteiros são variáveis que armazenam o endereço de memória, como o endereço de outra variável, por exemplo.

    Existem várias situações onde ponteiros são úteis, por exemplo:
    * alocação dinâmica de memória; 
    * manipulação de vetores; 
    * para retornar mais de um valor numa função;
    * Implementar funções genéricas;
    * Referência para estrutura de dados como: listas, pilhas árvores e grafos;

    Ex:

        ~~~C

            int x = 100;
            int *ponteiro;
            ponteiro = &x;

            printf("Valor de x = %d\n", n);
            printf("Endereço de x = %x", &x);
            printf("Valor de ponteiro = %x\n", ponteiro);
            printf("Endereço do ponteiro = %x\n", &ponteiro);
        ~~~

    É declardo um ponterio que recebe o endereço de memória da variável x. Logo em seguida é impresso o valor armazenado em x, e o endereço dessa variável. Por fim, o valor armazenado no ponteiro é impresso, ele é o endereço de memória da variável x.

    Por meio do ponteiro é possível mudar o valor da variável que esse ponteiro está apontando.

    Ex:

        ~~~C

            int x = 100;
            int *ponteiro;
            ponteiro = &x;
            printf("Valor de x = %d\n", x);
            *ponteiro += 10;
            printf("Valor de x = %d\n", x);
        ~~~

    Operador '*' retorna o dado que está armazenado no endereço apontado pelo ponteiro.

    Ex:
        ~~~C

            int x = 100;
            int *px = &x;

            printf("Endereço %x\n", &x);
            printf("Dado armazenado no endereço %d\n", x);
            printf("Endereço %x\n", px);
            printf("Dado armazenado no endereço %d\n", *px);
        ~~~

    Ex 2:

        ~~~C

            int x = 100;
            int *ponteiro;
            ponteiro = &x;
            printf("Valor de x = %d\n", n);
            printf("Endereço de x = %x\n", &x);
            printf("Valor no ponteiro = %x\n", ponteiro); //Vai mostrar o endereço da variável x, pois ela foi atribuida ao valor de 'ponteiro'
            printf("Endereço do ponteiro = %x\n", &ponteiro); //endereço do ponteiro permanece. Isso porque o endereço sempre será o mesmo, mas o valor pode mudar.
            ponteiro += 1; // Aqui o valor do ponteiro vai voltar pra ele
            printf("Valor modificado em ponteiro = %x\n", ponteiro);
            printf("Endereço do ponteiro = %x\n", &ponteiro);
        ~~~

    Deve-se ter cuidado ao realizar operações com ponteiros. Por exemplo, se o programdor fizer uma operação de soma básica no valor armazenado dentro do ponteiro, ele estará modificando o endereço que o ponteiro está apontando.
    Imagine o seguinte, o conteúdo de um ponteiro é como se fosse o endereço de uma resistência, se mudarmos essee conteúdo, o ponteiro irá apontar para outra residência.

### Aritmética de ponteiros

    Um conjunto limitado de operações aritméticas pode ser executado. Como são endereços de memória, ao somar 1 a num ponteiro, você estará indo para o próximo endereço de memória do tipo do dado especificado. O mesmo acontece se subtrair 1 num ponteiro.
