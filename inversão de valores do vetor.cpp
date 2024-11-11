#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
  {
  	int vetor[10];
  	int temp, i;
  	
  	  printf ("Digite 10 números inteiros: \n");
  	  for (i = 0; i < 10; i++)
  	  {
  	  	 scanf ("%d", &vetor[i]);
	  }
	  
	  for (i = 0; i < 5; i++)
	  {
	  	 temp = vetor[i];
	  	 vetor[i] = vetor[9 - i];
	  	 vetor[9 - i] = temp;
	  }
	printf ("Vetor invertido: \n");
	
	  for (i = 0; i < 10; i++)
	  {
	  	 printf ("%d \n", vetor[i]);
	  }
	return 0;
}
