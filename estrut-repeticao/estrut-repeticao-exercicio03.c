/*
4º problema
Desenvolva um programa que leia 3 notas de "n" alunos, calcule e mostre a média aritmética e a situação de aprovação de cada um deles. Lembre-se de que apenas a média igual ou acima de 7 aprova o aluno.

Lógica: precisamos de 3 variáveis do tipo real (float) para armazenar as notas de cada aluno, uma variável real para armazenar a média das notas e uma variável inteira (int) para controlar a repetição.

Repetir "n" vezes (comando de repetição PARA):
Ler nota1, nota2 e nota3 de cada aluno (comando de entrada de dados).
Calcular a média do aluno: (nota1+nota2+nota2) /3.
Se a média do aluno for > = 7, exibir aluno aprovado e sua média; senão, exibir aluno reprovado e sua média.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota1,nota2,nota3,media;
    int contalunos;
    for (contalunos=1;contalunos<=3;contalunos++)
    {
        printf("Entre com a nota 1 do aluno %d: \n", contalunos);
        scanf("%f", &nota1);
        printf("Entre com a nota 2 do aluno %d: \n", contalunos);
        scanf("%f", &nota2);
        printf("Entre com a nota 3 do aluno %d: \n", contalunos);
        scanf("%f", &nota3);
        media=(nota1+nota2+nota3)/3;
        if (media>=7)
            {
                printf("Aluno APROVADO com média : %.2f \n",media);
            }
        else
            {
                printf("Aluno REPROVADO com média : %.2f \n",media);
            }
    }
    return 0;
}