/*

1º problema
Desenvolva um programa que leia um número e o mostre 20 vezes.

*/

#include <stdio.h>

int main() {

    int num, cont;
    printf ("Digite um número: ");
    scanf ("%d", &num);
    for(cont = 0; cont <20; cont = cont +1) {
        printf ("\n %d Numero = %d", cont, num);
    }

    return 0;
}