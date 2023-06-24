#include <stdio.h>
int main(){
//printf("Hello\n");
int numero;
printf("Entre com um numero inteiro:\n");
//função fflush - pode usar em alguns casos, como ao usar o Eclipse
// fflush(stdout);
scanf("%d", &numero);

printf("O numero digitado foi: %d", numero);

return 0;

}