/*
5º problema
Desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos salários dos funcionários de uma empresa. Na sequência, deve ler o salário de cada um dos 50 funcionários, calcular e mostrar o novo salário reajustado, aplicando a porcentagem de ajuste sobre os respectivos salários atuais. Ao final, o maior salário reajustado da empresa deve ser apresentado na tela.

Lógica: precisamos de 4 variáveis do tipo real (float) para armazenar a porcentagem de reajuste, cada salário a ser lido, cada salário a ser reajustado e o maior salário reajustado, além de uma variável inteira (int) para controlar a repetição.

Ler a porcentagem de reajuste (comando de entrada de dados).
Inicializar com zero a variável maiorsal.
Repetir "n" vezes (comando de repetição PARA).
Ler o salário do funcionário (comando de entrada de dados).
Calcular o salário reajustado, aplicando a porcentagem de aumento lido.
Se salarioreajustado > maiorsalario
maiorsalario = salarioreajustado.
Exibir o conteúdo da variável maiorsalario.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float percreaj,salario,salarioreaj,maiorsal;
    int cont;
    maiorsal=0;
    printf("Percentual de reajuste salarial: \n");
    scanf ("%f",&percreaj);
        for (cont=1;cont<=3;cont++)
        {
            printf("Informe o salário do funcionário:\n");
            scanf("%f",&salario);
            salarioreaj=salario+(salario*percreaj/100);
            printf("O salário reajustado e : %.2f \n\n",salarioreaj);
            if (salarioreaj>maiorsal)
                maiorsal=salarioreaj;
        }
    printf("O maior salário reajustado e : %.2f",maiorsal);
    return 0;
}