/*

2º problema
Desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada aluno. Lembre-se de que apenas a média igual ou acima de 7 aprova o aluno.

*/



// Código em Linguagem C - Com o comando WHILE

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota1,nota2,nota3,media;
    int contalunos=1;
    while (contalunos<=6)
    {
        printf("Entre com a nota 1 do aluno: \n");
        scanf("%f",&nota1);
        printf("Entre com a nota 2 do aluno: \n");
        scanf("%f",&nota2);
        printf("Entre com a nota 3 do aluno: \n");
        scanf("%f",&nota3);
        media=(nota1+nota2+nota3)/3;
        if (media>=7)
        printf("APROVADO com média %.2f \n\n",media);
        else
            printf("REPROVADO com média %.2f \n\n",media);
        contalunos++;
    }
    return 0;
}