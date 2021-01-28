#include<stdio.h>
#include<stdlib.h>

int main()
{
	int v,v2,n;
	printf("Digite a quantidade de vezes que voce quer que apareca os numeros\n Exemplo:\n 1\n 10\n ");
	scanf("%d",&v);
	scanf("%d",&v2);
	while(n>=v && n<=v2)
	{
		printf("%d\n",n);
		n= n+1;
	}
	
}
