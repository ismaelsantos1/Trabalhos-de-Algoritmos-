#   Anotações sobre funções
    Funções, ou sub-programas, são segmentos de programa que executam uma determinada tarefa específica. Por exemplo, as funções de biblioteca (como sqrt(), pow(), getch() e printf()).

    Para além dessas funções, é permitido ao programador escrever suas próprias rotinas. Essas são chamadas de funções de usuário, podendo assim segmentar um programa grande em vários programas menores. Facilitando ou descomplicando o programa.

    Essa segmentação é chamada de modularização e permite que cada segmento seja  escrito e testado individualmente. Permite ainda que umm programa possa ser escrito por vários programadores ao mesmo tempo, cada um escrevendo um segmento separado.

#   Declaração de uma função

    float media2 (float a, float b){

        float med;
        med = (a + b)/ 2.0;
        return (med);
    }