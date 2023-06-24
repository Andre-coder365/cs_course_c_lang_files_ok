#include <stdio.h>

/*

2º problema
Desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles.

Lógica: precisamos de 3 variáveis do tipo inteiro (int) para armazenar cada número a ser lido, o maior dos números e controlar a repetição.

Inicializar a variável maior com zero.
Repetir 20 vezes (comando de repetição PARA):
Ler o número (comando de entrada de dados).
Se o número for superior à variável maior, ela recebe o conteúdo do número lido.
Exibir o conteúdo da variável maior (comando de exibição de dados).
Veja a seguir a solução do problema:

*/

int main () {

    int atual;
    int i = 0;
    int maior = 0;
    int cont = 1;
       
    for(; i <= 15-1; i++) {
        printf("Digite o numero de posicao %d:\n ", cont);
        cont = cont + 1;
        scanf(" %d", &atual);

        if (atual > maior) {
            maior = atual;
        }       

    }

     printf("O maior numero digitado foi %d", maior);

}