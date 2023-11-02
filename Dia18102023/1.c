/*
Implemente uma função que recebe por parâmetro o raio de uma
    esfera e retorne o seu volume (volume = 4/3*Pi *Raio*Raio*Raio)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float volume(float raio){

    float volumeEsfera, pi = 3.14;

            volumeEsfera = ( pi * pow(raio, 3)) * 4/3; 

    return (volumeEsfera);

}

int main(){

        float raio, volEsfera;
        puts("Vamos calcular o volume da esfera");
        puts("++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
        puts("Digite o raio da esfera:");
        scanf("%f", &raio);

            volEsfera =  volume(raio);
    
        printf("O volume da esfera é: %.2f", volEsfera);

}