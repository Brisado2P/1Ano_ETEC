#include<stdio.h>
#include<stdlib.h>

int main()
{
	int v,v2;
	printf("Digite a quantidade de vezes que voce quer que apareca os numeros\n");
	scanf("%d",&v2);
	v=1;
	while(v<=v2)
	{
		printf("%d\n",v);
		v= v+1;
	}
	
}
