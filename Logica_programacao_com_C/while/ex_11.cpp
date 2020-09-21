#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("bla...");
	int S,I,n;
	S=1;
	I=0;
	
	while(S<=10)
	{
		scanf("%d",&n);
		if(n%2!=1)
		{
			I=I+1;
		}
		S=S+1;
		
	}
	printf("%d",I);
}
