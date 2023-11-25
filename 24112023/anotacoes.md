# Alocação dinâmica

    O tipo de alocaçao padrão, ou seja, aquele feito até hoje aqui, tende a disperdiçar mais memória porque nem sempre todo o tamaho reservado é usado.
    Além disso, quando não se conehece o espaço total necessário, a tendência é o programadror exagerar pois é melhor superdimensionar do que, no fim, faltar espaço.

    ** Na alocação dinâmica é possível alocar espaços enquanto um programa é executado. Isso permite que o espaço em memória seja alocado apenas quando necessário. Além disso, é possível aumentar e diminuir a quantidade de memória alocada.**

    Para entender melhor como funciona, é necessário compreender que um programa, ao ser executado, divide a memória do dispositivo em 4 áreas:

    * Instruções - armazena o código em linguagem de máquina;
    * Pilha - local onde são criadas/guardadas as variáveis locais;
    * Memória estática - armazena as variáveis locais e globais estáticas;
    * Heap - local onde são armazenados os dados alocados dinamicamente.

    Para poder fazer a alocação dinâmica, é essencial sabermos o tamanho que ocupa na memória o dado que se quer guardar. Para isso, é usado a função *sizeof*. Essa função determina o número de bytes para um certo tipo de dados.

    EX:
        ~~~C

            char str[50] = "UERN";
            int n = 90;

                printf("Tamanho %lu\n", sizeof(char));
                printf("Tamanho %lu\n", sizeof(str))
                printf("Tamanho %lu\n", sizeof(int));
                printf("Tamanho %lu\n", sizeof(n));
            
        ~~~
    
    → A alocação e liberação dos espaços de memória é feito por duas funções da *stdlib.h*:

        * *malloc()*: reserva/aloca um espaço de memória e retorna um ponteiro para o início do espaço de memória alocado.
        * *free()*: libera um espaço de memória alocado.

    Função malloc():

        * Aloca um bloco de bytes consecutivos na memória e devolve o endereço inicial desse bloco. 
        * Retorna um ponteiro do tipo *void* para o início do espaço de memória alocado.
        * Deve ser usado um *cast* para transformar o ponteiro devolvido num ponteiro do tipo desejado.
        
        !!!
        Se não for possível reservar o espaço na memória a função irá devolver *NULL*

    EX:

        ~~~C

            int *p;
            p = (int*) malloc(4); 
            // ou também pode ser feito assim:
            p = (int*) malloc(sizeof(int));

            if(p == NULL){
                printf("Erro ao alocar memória\n");
                exit(-1);
            }
        ~~~

    Função free():

        * Libera uso de um bloco de memória previamente alocado, possibilitando que esse bloco seja reaproveitadoo.

        * O mesmo endereço retornado por uma chamada da função malloc() deve ser passado na função free().

        * A determinação do tamanho do bloco a ser liberado é feito de forma automática.

        * Para cada função malloc() chamada, deve haver uma chamada da função free() posteriormente.

    EX: 

        ~~~C

            int main(){

                float *v;
                int i, num_elementos;

                    printf("Informe o números de componentes do vetor: ");
                    scanf("%d", &num_elementos);

                    v = (float *) malloc(num_elementos * sizeof(float));
                    if(v == NULL){
                        printf("Erro ao alocar memória.\n");
                        exit(-1);
                    }

                    for(i=0; i<num_elementos; i++){

                        printf("Vetor[%d]: ", i+1);
                        scanf("%.2f", &v[i]);
                    }
                    for(i=0; i<num_elementos; i++){
                        printf("\n%.2f", v[i]);
                    }
                    printf("\n");
                    free(v);
                    return 0;
            }
        ~~~
    
    LINKS:

    [Ryoskate] (https://ryoskate.jp/PlayVisualizerC.js/)
    [Ryoskate] (https://ryoskate.jp/PLIVET/)
    [Play-Visualizer C] (http://play-visualizer-c.herokuapp.com/visualizer?)
    [PythonTutor] (http://pythontutor.com/c.html)
