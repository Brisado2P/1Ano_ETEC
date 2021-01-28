#include <stdlib.h>
#include <stdio.h>

int main()
{
	int tab, num;
	tab=0;
	printf("digite a tabuada que voce quer");
	scanf("%d",&num);
	while(tab<10)
	{
		tab++;
		printf("\n %4d X %2d = %4d", num, tab, tab * num);
		
	}
	
}
