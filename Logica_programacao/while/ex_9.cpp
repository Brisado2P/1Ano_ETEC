#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n1,n2;
	printf("Digite o primeiro:");
	scanf("%f",&n1);
	printf("Digite o utimo: ");
	scanf("%f",&n2);
	if(n1>n2)
	{
		while(n1>=n2)
		{
			printf("%f",n1);
			n1=n1-1;
		}
	}
	else
	{
		while(n2<=n1)
		{
			printf("%.f\n",n2);
			n2++;
		}
	}
}
