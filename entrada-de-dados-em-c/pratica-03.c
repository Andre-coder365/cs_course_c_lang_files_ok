#include <stdio.h>
int main(){
char inicial;
int idade;
printf("Entre com a sua idade e a sua inicial:\n");
scanf("%d", &idade);
scanf("%c", &inicial);
printf("Voce tem %d anos e seu nome comeca com %c\n", idade, inicial);
return 0;
}

/*

Após a execução dos códigos, o conteúdo exibido na tela será:
Voce tem 30 anos e seu nome comeca com.
Ao apertar 30 e enter, a variável idade armazenará o valor 30 e a variável inicial, o enter.

*/