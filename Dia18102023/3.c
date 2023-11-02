/*
Implemente uma função que receba a média final de um aluno por
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
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    float media( float mediaFinal){

            //float medi = mediaFinal;
            int nota;
            
            if(mediaFinal >= 0 && mediaFinal <= 4.9){

                puts("A sua nota final teve o conceito D");
                nota = 1;

            } else if(mediaFinal >= 5.0 && mediaFinal <= 6.9){

                puts("A sua nota final teve o conceito C");
                nota = 2; 

            } else if(mediaFinal >= 7.0 && mediaFinal <= 8.9){

                puts("A sua nota final teve o conceito B");
                nota = 3;

            } else if(mediaFinal >= 9){

                puts("A sua nota final teve o conceito A");
                nota = 4;

            }

            return (nota);
    }

    int main(){

        float medi;
        int result;
        
        puts("Digite sua média final para ver qual seu conceito no boletim: ");
        scanf("%f", &medi);
        
        result = media(medi);
    }