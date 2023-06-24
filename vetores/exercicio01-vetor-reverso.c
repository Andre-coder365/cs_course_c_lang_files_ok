#include <stdio.h>

int main () {
    int posicao;
    int vetor [100];

    printf("Digite 100 números \n");

    for (posicao = 0; posicao < 100; posicao++) {
        scanf("%d", &vetor[posicao]);
    }

    printf("Saída do programa\n");

    for (posicao = 99; posicao >=0; posicao --) {
        printf("%d", vetor[posicao]);
        printf("\n");
    }

    return 0;

}