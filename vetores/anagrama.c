#include <stdio.h>

int main()

{

char nome[8];
int ind;
scanf ("%s",nome);
for (ind=8;ind>=0;ind--) {
    printf ("%c", nome[ind]);
}

}