/*
    Escrever um programa em C para informar o número de caracteres presentes num arquivo de texto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main(){

        int c, cont=0, flag=0;
        char tamWords[100] = {"Porra brother, tá foda esses trabalhos.Tinham que pelo menos valer 1 pontinho."};

        FILE *arq = fopen("newarchive.txt", "w");
        if(arq == NULL){
            printf("\nErro na criacao do arquivo\n");
        
        } else{

            fprintf(arq, "%s", tamWords);

            fclose(arq);
            
            
            while(!feof(arq)){
		            c = getc(arq);
        		        if ( c == ' '/* || c == '\n'*/ ){
		        	        if (flag == 0){
				
                                cont++;
                                flag = 1;
                                //printf("%d", cont);

                            }
            }
                //printf("%d", cont);
        }
                //printf("%d", cont);
    
    }
    printf("%d", cont);
        return 0;

}