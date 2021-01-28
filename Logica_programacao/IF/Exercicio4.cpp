#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float maior;
	float n1,n2;
	printf("Digite o primeiro numero:");
	scanf("%f",&n1);
	maior=n1;
	printf("Digite o segundo numero:");
	scanf("%f",&n2);
	if(n2 > maior)
	maior = n2;
	printf("O maior numero é :%.f\n", maior);
	system("pause");
}
