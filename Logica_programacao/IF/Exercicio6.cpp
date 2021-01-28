#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
    float nota;
    printf("Digite uma nota:");
    scanf("%f",&nota);
    if(nota>10)
    {
    	printf("Nota invalida\n");
	}
    else
    {
    	printf("Nota valida\n");
	}
    
    system("pause");
}
