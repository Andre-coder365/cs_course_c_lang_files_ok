// Código em Linguagem C

/*

2º problema
Desenvolva um programa que leia uma sequência de números, podendo terminar com o número 0 ou 9. Para cada número lido (diferente de 0 ou 9), mostre seu sucessor caso o número seja par, ou seu antecessor se o número for ímpar.

Lógica: veja abaixo alguns exemplos de entrada com a lista terminando, no primeiro exemplo com 0 (zero) e no segundo exemplo com 9 (nove), e respectivos exemplos de saída. Optamos por usar o comando DO... WHILE, ou seja, precisamos de uma variável num para ler cada número da sequência.

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    do
    {
        printf ("Digite um número: \n");
        scanf("%d",&num);
        if (num!=0 && num!=9)
        {
            if (num%2 ==0)
                printf ("Sucessor = %d\n\n ",num+1);
            else
                printf ("Antecessor = %d\n\n ",num-1);
        }
    }
    while (num!=0 && num!=9);
    return 0;
}