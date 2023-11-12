# Endereços e Ponteiros

## Endereços

    Endereços diz respeito a uma memória RAM (Random Acess Memory) de qualquer computador, composta por uma sequência de bytes. A posição (0,1,2,3,etc) que um byte ocupa na sequência é o endereço do byte( 8bits = 1 byte). Dentro de cada bit terá um valor de 0 e 1, e dentro do byte haverá as informações armazenadas num conjunto. 

    Ao declarar uma variável do tipo Int, por exemplo, será reservado na memória do computador 4 bytes para está variável, e dentro dela ficará contido as informações que forem gravadas dentro dessa variável.
    O endereço de memória de um byte será sempre o primeiro o primeiro valor, da mesma forma que o endreço de memória do próximo byte será o último valor do endereço de memória do primeiro byte+1. Ou seja:

        EX:
            int x;
            int y;
            x=10 // x ocupa um endereço de 4 bites
            // supondo que x inicie no endereço 12 e finalize no 15. Logo o endereço de "x" será o 12 e o endreço de y será no 16.
    
    Em ponteiros será possível chamar os endereços de memória do computador para acessar o que está armazenado.
    
    Cada é um ponteiro 