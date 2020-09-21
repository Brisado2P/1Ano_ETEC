#include <stdlib.h>
#include <stdio.h>

int main()
{
	int t, c, cont, R;

	scanf("%d",&t);
	scanf("%d",&c);
	cont=1;
	while(cont<=c)
	{
		R=cont*t;
		printf("\n %d X %d = %d", t, cont, R);
		cont++;
	}
}
