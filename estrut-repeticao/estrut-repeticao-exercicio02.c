#include <stdio.h>
#include <stdlib.h>

/*
3º problema
Desenvolva um programa que leia o salário de 10 funcionários de uma empresa, calcule e mostre o maior salário e a média salarial da empresa.

Lógica: precisamos de 4 variáveis do tipo real (float), para armazenar cada salário a ser lido, o maior salário, a soma salarial — para calcular a média — e a média salarial, além de uma variável inteira (int) para controlar a repetição.

Inicializar com zero as variáveis: maior e soma.
Repetir 10 vezes (comando de repetição PARA):
Ler o salário do funcionário (comando de entrada de dados).
Se o salário for superior à variável maior, ela recebe o conteúdo do salário lido.
Acumular a soma dos salários na variável soma.
Calcular a média salarial, dividindo a soma dos salários por 10 (total de funcionários).
Exibir o conteúdo das variáveis maior e média (comando de exibição de dados).
A seguir vemos a solução:
*/

int main()
{
    int cont;
    float salario,media,soma,maior;
    maior=0; soma=0;
    for (cont=1;cont<=10;cont++)
    {
        printf ("Digite o salário do funcionário: \n");
        scanf("%f",&salario);
        soma=soma+salario;
        if (salario > maior)
        {
            maior=salario;
        }
    }
    media=soma/10;
    printf ("O maior salário da empresa e = %.2f \n",maior);
    printf ("A média salarial da empresa e = %.2f \n",media);
    return 0;
}