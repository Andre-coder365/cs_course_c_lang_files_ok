/*
Inclua o Locale
Corrija os textos dentro do c�digo (parte de acentos)
Clique em UTF-8 e pe�a na command Palette
"Reopen with ISO 8859"
*/

#include<stdio.h>
#include<locale.h>

int main() {



setlocale(LC_ALL, "Portuguese_Brazil");

printf("Vamos testar a acentua��o se est� funcionando corretamente! - n�mero, avi�o, ma��");

}