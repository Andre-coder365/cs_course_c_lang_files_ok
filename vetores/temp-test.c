#include <stdio.h>

int main() {
    int num,maior,ind;
    maior = 0;
    for (ind= 1; ind <=5; ind=ind+1) {
        printf("Digite um numero: \n");
        scanf ("%d",&num);
        if (num > maior) {
            maior=num;
        }
    }
    printf ("O maior dos numeros lidos e: \n %d", maior);
    return 0;
}