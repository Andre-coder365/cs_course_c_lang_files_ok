#include <stdio.h>
int main (void)
{
float nota;
    printf ("Digite a nota: ");
    scanf("%f", &nota);
    printf("%.2f\n",nota);
    if (nota < 0)
        printf ("Erro: Média inválida!\n");
    else if (nota > 10)
        printf ("Erro: Média inválida!\n");
    else if (nota >= 5)
        printf ("Aluno aprovado!\n");
    else
        printf("Aluno reprovado!\n");
}