#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portugese");
	int n;	
	printf("Digite um numero para ver se � par ou impar:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Este numero � par\n");
	}
	else
	{
		printf("Este numero � impar\n");
	}
	system("pause");
}
