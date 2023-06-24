#include <stdio.h>
int main(){
char ch1, ch2;
printf("Entre com duas letras:\n");
scanf("%c", &ch1);
scanf("%c", &ch2);
printf("As letras inseridas foram %c e %c.\n", ch1, ch2);
return 0;
}

/*
Você sabe o que aconteceu? Por que não foi possível inserir a segunda letra? Por causa do teclado!
Ele armazena temporariamente tudo o que digitamos, mas não repassa instantaneamente para o sistema. Podemos digitar alguma letra e apagá-la com a tecla backspace (←), mas quando apertamos a tecla enter, o sistema recebe a letra que digitamos e o enter.
Esse armazenamento temporário ocorre no chamado buffer do teclado. Como as variáveis do exemplo anterior recebem caracteres, a letra e o enter são armazenados, respectivamente, em ch1 e ch2. Por isso, ocorre esse comportamento inesperado.
Existem duas formas de evitar que isso aconteça: A primeira é que, quando antes do símbolo de formato de leitura, você pode utilizar a função scanf() com um espaço na string. Isso fará com que sejam ignorados caracteres especiais, como o enter.
Assim, o código seria alterado para:

scanf(" %c", &ch2);

Após a primeira chamada da função scanf(), efetue a limpeza do buffer do teclado com a seguinte instrução, caso seu sistema operacional seja o Windows:

fflush(stdin);

Caso seja usuário do Linux, utilize a função:

__fpurge()

Temos usado a função scanf() com os nomes das variáveis precedidos de &. Esse operador deve ser lido como o endereço de. Assim, quando passamos o parâmetro &numero para a função scanf, estamos informando o endereço na memória da variável numero. Por essa razão, todas as variáveis dos tipos char, int, float e double devem ser precedidas de &.

Outra função que pode ser usada para a leitura de char, a partir do teclado, é a getc, traduzida do inglês como “pegar o caractere”. Dessa forma, se declararmos a variável:

char ch1;

Tanto getc (ch1); quanto scanf(“%c”, ch1); terão o mesmo efeito.

*/