#include <stdio.h>
#include <stdlib.h>

int main()
{
	int v, n;
	v=1;
	scanf("%d",&n);
	do
	{
		printf("Test\n",n);
		v=v+1;
	}while(v<=n);
}
