#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ 
  setlocale(LC_ALL,"Portuguese");
  float num;
  printf("Digite um numero:");
  scanf("%f",&num);
  if(num>0)
  {
  	printf("O numero é positivo\n");
  }
  else
  { 
   if(num<0)
    {
    	printf("O numero é negativo\n");
	}
	else
	{
	 printf("O numero é nulo\n");	
	}
  }
  system("pause");
}
