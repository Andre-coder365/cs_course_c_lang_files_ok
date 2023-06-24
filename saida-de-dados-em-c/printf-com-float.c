#include <stdio.h>
int main(){
float a;
a = 12.5;
printf("a = %f\n", a);
/*
Repare que a variável do tipo float é armazenada com seis casas decimais. Para reduzir esse número, utiliza-se %.1f, %.2f, entre outros. O número entre “.” e “f” indica as casas decimais exibidas. É importante lembrar que o conteúdo da variável permanece inalterado, visto que a mudança afeta apenas a forma como será feita a escrita na tela. Vamos fazer um teste!
No exemplo anterior, caso alterássemos a última linha para:
*/
printf("a = %.1f\n", a);
return 0;
}