#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
float n;

	printf("Digite um numero: ");
	scanf("%f",&n);
	if(n>0)
	{   
	      printf("Este numero � positivo\n");
	}
	else
	{
		  printf("Este numero � negativo\n");
	}
	system("pause");
}
