#include <stdio.h>
#define TITULO "Calculadora"

  int main()
  {
   printf ("%s \n", TITULO);
  	int opc, qtd = 0;
  	float soma, subt, mult, divs, i, j;
  	     
  	  printf ("\n Escolha sua opera��o; \n \n 1. Adi��o: \n 2. Subtra��o: \n 3. Multiplica��o: \n 4. Divis�o: \n 5. Sair \n");
  	  scanf ("%d", &opc);
  	  
  	switch (opc)
    {  	    	
	   case 1:
	   	printf ("\n Digite o %d� valor: \n", qtd + 1);
	   	scanf ("%f", &i);
	   	printf ("Digite o %d� valor: \n", qtd + 1);
	   	scanf ("%f", &j);
	   	soma = i + j;
	   	printf ("\n A soma dos valores � igual a %.1f", soma);
	   	break;
	   	
	   case 2:
	   	printf ("\n Digite o %d� valor: \n", qtd + 1);
	   	scanf ("%f", &i);
	   	printf ("Digite o %d� valor: \n", qtd + 1);
	   	scanf ("%f", &j);
	   	subt = i - j;
	   	printf ("\n A subtra��o dos valores � igual a %.1f", subt);
	   	break;
	   	
	   case 3:
	   	printf ("\n Digite o %d� valor: \n", qtd + 1);
	   	scanf ("%f", &i);
	   	printf ("Digite o %d� valor: \n", qtd + 1);
	   	scanf ("%f", &j);
	   	mult = i * j;
	   	printf ("\n A multiplica��o dos valores � igual a %.1f", mult);
	   	break;
	   	
	   case 4:
	   	printf ("\n Digite o %d� valor: \n", qtd + 1);
	   	scanf ("%f", &i);
	   	printf ("Digite o %d� valor: \n", qtd + 1);
	   	scanf ("%f", &j);
	   	divs = i / j;
	   	printf ("\n A divis�o dos valores � igual a %.1f", divs);
	   	break;
	   	
	   case 5:
	   	printf ("\n Programa encerrado.");
	   	break;
    }
    return 0;
  }
