#include <stdio.h>
#define TITULO "Calculadora"

  int main()
  {
   printf ("%s \n", TITULO);
  	int opc, qtd = 0;
  	float soma, subt, mult, divs, i, j;
  	     
  	  printf ("\n Escolha sua operação; \n \n 1. Adição: \n 2. Subtração: \n 3. Multiplicação: \n 4. Divisão: \n 5. Sair \n");
  	  scanf ("%d", &opc);
  	  
  	switch (opc)
    {  	    	
	   case 1:
	   	printf ("\n Digite o %d° valor: \n", qtd + 1);
	   	scanf ("%f", &i);
	   	printf ("Digite o %d° valor: \n", qtd + 1);
	   	scanf ("%f", &j);
	   	soma = i + j;
	   	printf ("\n A soma dos valores é igual a %.1f", soma);
	   	break;
	   	
	   case 2:
	   	printf ("\n Digite o %d° valor: \n", qtd + 1);
	   	scanf ("%f", &i);
	   	printf ("Digite o %d° valor: \n", qtd + 1);
	   	scanf ("%f", &j);
	   	subt = i - j;
	   	printf ("\n A subtração dos valores é igual a %.1f", subt);
	   	break;
	   	
	   case 3:
	   	printf ("\n Digite o %d° valor: \n", qtd + 1);
	   	scanf ("%f", &i);
	   	printf ("Digite o %d° valor: \n", qtd + 1);
	   	scanf ("%f", &j);
	   	mult = i * j;
	   	printf ("\n A multiplicação dos valores é igual a %.1f", mult);
	   	break;
	   	
	   case 4:
	   	printf ("\n Digite o %d° valor: \n", qtd + 1);
	   	scanf ("%f", &i);
	   	printf ("Digite o %d° valor: \n", qtd + 1);
	   	scanf ("%f", &j);
	   	divs = i / j;
	   	printf ("\n A divisão dos valores é igual a %.1f", divs);
	   	break;
	   	
	   case 5:
	   	printf ("\n Programa encerrado.");
	   	break;
    }
    return 0;
  }
