#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n1,n2;
	printf("Digite o primeiro:");
	scanf("%f",&n1);
	printf("Digite o segundo: ");
	scanf("%f",&n2);
	if(n1>n2)
	{
		do
		{
			printf("%f\n",n1);
			n1=n1-1;
		}	while(n1>=n2);
	}
	else
	{
		do
		{
			printf("%f\n",n1);
			n1=n1+1;
		}	while(n1<=n2);
	}
}
