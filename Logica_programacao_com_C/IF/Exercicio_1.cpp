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
	      printf("Este numero é positivo\n");
	}
	else
	{
		  printf("Este numero é negativo\n");
	}
	system("pause");
}
