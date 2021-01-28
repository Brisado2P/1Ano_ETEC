#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL,"Portuguese_Brazil");
  float al, at, di, aa;
  printf("Bem vindo ao programa\n");
  printf("Digite o valor do aluguel atual:\n");
  scanf("%f",&al);
  printf("Digite os dias de atraso :\n");
  scanf("%f",&at);
  if(at==0)
   {
     printf("Aluguel:R$%.2f\n",al);
     di = al*0.075;
     printf("Diferenca :R$%.2f\n",di);
     aa=al-di;
    printf("Aluguel atualizado:R$%.2f\n ",aa);
    }
    else
 
 	if(at>0)
	 {
	 
       printf("Aluguel:R$%.2f\n",al);
       di = al*0,1;
       printf("Diferenca:R$%.2f\n",di);
       aa=al+di;
       printf("Aluguel atualizado:R$%.2f\n",aa);
     }
system("pause");
  }
   
     
