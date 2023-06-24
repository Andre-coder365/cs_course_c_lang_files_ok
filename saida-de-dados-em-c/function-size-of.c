/*Exemplo de código: Como saber quantos bytes cada variável ocupa em memória
Faça um programa em C que mostra quantos bytes ocupam cada uma das variáveis: char, int, float e double.

Existem duas maneiras de fazer isso, a primeira é simplesmente colocando as palavras reservadas dentro da função sizeof(). A segunda maneira é declarando variáveis e colando ela dentro da função sizeof(), como faremos no próximo exemplo.*/

#include <stdio.h>
// Curso C Progressivo: www.cprogessivo.net
// O melhor curso de C! Online e gratuito !
// Artigos, apostilas, tutoriais e vídeo-aulas sobre
// a linguagem de programação C !
 
int main(void)

{
	char a;
	
	printf("Char: %d bytes\n", sizeof(a));
	
    printf("Char: %d bytes\n", sizeof(char));
    printf("Int: %d bytes\n", sizeof(int));
    printf("Float: %d bytes\n", sizeof(float));
    printf("Double: %d bytes\n", sizeof(double));
    return 0;

}
