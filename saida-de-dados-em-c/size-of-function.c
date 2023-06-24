/*Exemplo de código: Como saber quantos bytes cada variável ocupa em memória
Faça um programa em C que mostra quantos bytes ocupam cada uma das variáveis: char, int, float e double.

Existem duas maneiras de fazer isso, a primeira é simplesmente colocando as palavras reservadas dentro da função sizeof(). A segunda maneira é declarando variáveis e colando ela dentro da função sizeof(), como faremos no próximo exemplo.
(comentário feito no site www.cprogessivo.net)
*/

#include <stdio.h>
//Trecho de código disponível no site abaixo comentado
// Curso C Progressivo: www.cprogessivo.net
// Artigos, apostilas, tutoriais e vídeo-aulas sobre
// a linguagem de programação C !
 
int main(void)

{   

    printf("Char: %d bytes\n", sizeof(char));
    printf("Int: %d bytes\n", sizeof(int));
    printf("Float: %d bytes\n", sizeof(float));
    printf("Double: %d bytes\n", sizeof(double));
    

    float f1 = 2.5;
    printf("\nA variável f1 fica na posição %p, tem valor %f e ocupa %d posicoes", &f1, f1, sizeof(f1));

    short int i1 = 0x02FE;

    i1 +=4;

    printf("\nA variável i1 fica na posição %p, tem valor %f e ocupa %d posicoes", &i1, i1, sizeof(i1));

    return 0;

}