#include <stdio.h>
#include <stdlib.h>

int main()
{
	int s,i,n;
	s=1;
	i=0;
	while(s<=10)
	{
		scanf("%d",&n);
		if(n>0)
		{
			i=i+1;
		}
		s=s+1;
	}
	printf("%d",i);
}
