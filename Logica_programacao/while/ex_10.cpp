#include <stdio.h>
#include <stdlib.h>

int main()
{
	 float n,s;
	 printf("...");
	 scanf("%f",&n);
	 s=0;
	 while(n>=0)
	 {
	 	
	 	s=n+s;
	 	scanf("%f",&n);
	 }
	printf("%f",s);
}
