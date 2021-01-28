#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t,tab,i;
	scanf("%d",&t);
	tab=0;
	for(i=tab;i<=10;i++){
		tab=i*t;
		printf("%d x %d = %d\n",t,i,tab);
	}
}
