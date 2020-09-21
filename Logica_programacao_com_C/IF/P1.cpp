#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	float maior, menor, Aux;
	char ordem, inter;
	int i;
	printf("Digite dois numeros:\n");
	scanf("%f",&maior);
	scanf("%f",&menor);
	printf("Digite a ordem de exibição(C- crescente, D-decrescente):\n");
	fflush(stdin);
	scanf("%c",&ordem);
	printf("Digite o intervalo de exibição(A- aberto, F- fechado):\n");
	fflush(stdin);
	scanf("%c",&inter);
	if(maior<menor)
	{
		Aux=menor;
		menor=maior;
		maior=Aux;
	}
	if(inter=='A')
	{
		menor=menor+1;
		maior=maior-1;
	}
	switch(ordem)
	{
		case 'C':
		
			for(i=menor;i<=maior;i++)
			{
				printf("%d\n",i);
			}
		break;
		case 'D':
		
			for(i=maior;i>=menor;i--)
			{
				printf("%d\n",i);
			}
		break;
		default:
		
			printf("Operação invalida");
		
	}
}
