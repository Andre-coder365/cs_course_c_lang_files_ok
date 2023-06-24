/*
6º problema
Desenvolva um programa que leia um número N e, em seguida, uma lista de N números inteiros. Esse programa também deve calcular e mostrar a soma dos números pares e dos números ímpares da lista.

Lógica: precisamos de 4 variáveis inteiras (int) para armazenar o número N, cada número da lista de N números, a soma dos pares e a soma dos ímpares, além da variável para controle da repetição da leitura e processamento dos N números.

Ler o número N (comando de entrada de dados).
Inicializar as variáveis contadoras: somapar e somaimpar.
Repetir N vezes:
Ler o número da lista.
Se o resto da divisão do número da lista por 2 = 0
Somapar = somapar + número da lista
Senão somaimpar = somaimpar + número da lista.
Exibir o conteúdo das variáveis somapar e somaimpar.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cont,n,num,somapar,somaimpar;
    somapar=0;
    somaimpar=0;
    printf ("Digite a quantidade de números da lista: \n");
    scanf("%d",&n);
    for (cont=1;cont<=n;cont++)
    {
        printf ("Digite um número: \n");
        scanf("%d",&num);
        if (num%2==0)
            somapar=somapar+num;
        else
            somaimpar=somaimpar+num;
    }
    printf ("A soma dos números pares = %d\n",somapar);
    printf ("A soma dos números ímpares = %d\n",somaimpar);return 0;
}

