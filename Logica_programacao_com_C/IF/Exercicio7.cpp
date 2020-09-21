#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float media1, media2;
	float nota1, nota2;
	printf("Digite a primeira nota:");
	scanf("%f",&nota1);
	printf("Digite a segunda nota:");
	scanf("%f",&nota2);
	media1 = nota1+nota2;
	media2 = media1/2;
	if(media2>5)
	{
		printf("Media : %.f   Voce esta aprovado\n",media2);
	}
	else
	{
		printf("Media : %.f    Voce esta reprovado\n",media2);
	}
	
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
