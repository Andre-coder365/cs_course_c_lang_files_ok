#include <stdio.h>
int main(){
char inicial;
int idade;
printf("Entre com a sua idade e a sua inicial:\n");
/*
Após a execução dos códigos, ocorrerá um erro e nada será exibido na tela. Isso aconteceu porque a função scanf() apresenta variáveis sem o operador &.
*/
scanf("%d %c", idade, inicial);
printf("Voce tem %d anos e seu nome comeca com %c\n",idade, inicial);
return 0;
}