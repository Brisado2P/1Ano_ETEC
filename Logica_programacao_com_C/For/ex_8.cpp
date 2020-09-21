#include<stdio.h>
#include<stdlib.h>
int main()
{
	float n, n2;
	int s, i;
	printf("digite dois valores");
	scanf("%f", &n);
	scanf("%f", &n2);
	printf("1: para crescete ou -1: para decrescente");
	scanf("%d", &s);
	if(s==1){
		if(n>=n2){
			for(i=n2;i<=n;i++){
				printf("%d\n", i);
			}
		}
		else{
			for(i=n;i<=n2;i++){
				printf("%d\n", i);
			}
		}
	}
	else{
		if(n>=n2){
			for(i=n;i>=n2;i--){
				printf("%d\n", i);
			}
		}
		else{
			for(i=n2;i>=n;i--){
				printf("%d\n", i);
			}
		}
	}
}
