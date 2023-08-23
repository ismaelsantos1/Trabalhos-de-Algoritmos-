/*
Simule uma eleição com 5 candidatos, votos nulos e brancos. Ao final da eleição
o usuário informa uma senha para que votação seja interrompida e os resultados
sejam impressos.
*/

#include <stdio.h>

#define TAM 7

    int main(){

        int i, i2, votos , x, vet[TAM] = {12, 13, 15, 22, 69, 11, 99}, posVot[TAM] = {0, 0, 0, 0, 0, 0, 0};

        printf("A eleição está aberta e esses são os candidatos:\n"
        "\nJoão:      [12]"
        "\nNicholas:  [13]"
        "\nIsmael:    [15]"
        "\nLutercio:  [22]"
        "\nGabriel:   [69]"
        
        "\n\nPara votar nulo ou branco tecle: \n"
        "\nNulo:[11]"
        "\nBranco: [99]"
        
        "\n\nPara encerrar a votação digite 0");

        printf("\n\nDigite seu númros de votos: ");
        scanf("%d", &votos);

        if(votos > 0){

            for(i=0; i<TAM; i++){
                printf("Digite o seu voto: ");
                scanf("%d", &x);

                    do{
                        if(x == 3){
                            printf("Código inválido. Digite novamente");
                        }
                                        
                    if(x == (vet[0]) || x == (vet[1]) || x == (vet[2]) || x == (vet[3]) || x == (vet[4]) || x == (vet[5]) || x == (vet[6]) || x == 0){ //verificando se os valores do voto batem com os valores armazenados em cada índice do vetor. x==0 encerra a votação

                        if(x !=0){

                            for(i2= 0; i2<TAM; i2++){
                                if(x == vet[i2]){
                                    posVot[i2]++;
                                }
                            }
                        } else{
                            printf("\nVotação finalizda. Obrigado por votar");
                            printf("\nLembre-se: votar é um direito e dever de todo cidadão. Vote com consciência.");

                            i = votos;
                        }

                    } else{
                        x = 3;
                    }
                }while(x == 3);
            }
        }
        printf("\nOs resultados eleição são: \n"
        "João:     [%i]"
        "\nNicholas: [%i]"
        "\nIsmael:   [%i]"
        "\nLutercio: [%i]"
        "\nGabriel:  [%i]", posVot[0], posVot[1], posVot[2], posVot[3], posVot[4], posVot[5], posVot[6]);
        return 0;
    }