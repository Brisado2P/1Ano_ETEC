#include <stdlib.h>
#include <stdio.h>

int main(){
	int v,v2;
	scanf("%d",&v);
	scanf("%d",&v2);
	v=v+1;
	while(v<v2){
		printf("%d\n",v);
		v=v+1;
	}
	
}
