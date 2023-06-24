/*
Inclua o Locale
Corrija os textos dentro do código (parte de acentos)
Clique em UTF-8 e peça na command Palette
"Reopen with ISO 8859"
*/

#include<stdio.h>
#include<locale.h>

int main() {



setlocale(LC_ALL, "Portuguese_Brazil");

printf("Vamos testar a acentuação se está funcionando corretamente! - número, avião, maçã");

}