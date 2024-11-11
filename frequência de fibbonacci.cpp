#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  int main ()
  {
    int i, num1 = 0, num2 = 1, num3;
    int qtd;
    
     printf ("Até qual número de Fibonacci deseja verificar? ");
     scanf ("%d", &qtd);
     
     for (i = 0; i < qtd; i++)
     {
     	printf ("%d \n", num1);
     	num3 = num1 + num2;
     	num1 = num2;
     	num2 = num3;
	 }
  }
