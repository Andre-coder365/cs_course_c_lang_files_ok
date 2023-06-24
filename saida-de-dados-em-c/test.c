#include <stdio.h>


 
int main(void)

{   

  char b1 = 'a';


  double IMC = 0.0;
  double peso = 60.0;
  double altura = 1.80;
    

    printf("o inteiro é: %d", b1);

    IMC = peso / (altura * altura);

    printf("\nO IMC é: %f", IMC);

    return 0;


}