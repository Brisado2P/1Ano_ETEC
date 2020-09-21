#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese");
    float av1,av2, av3,m;
    printf("Digite as notas");
    scanf("%f",&av1);
    scanf("%f",&av2);
    scanf("%f",&av3);
    if(av1<av2 && av1<av3)
    {
          m=(av2+av3)/2;
    }     
    else
    {  
         if(av2<av3&&av3<av1)
         {
                  m=(av3+av1)/2;
         }
         else
         {
                  if(av3<av2&&av2<av1)
                  {
                             m=(av2+av1)/2;
                  }
         }
    }
    if(m>=6)
    {
           printf("Media :%.f  Voce esta aprovado\n",m);
    }
    else
    {
           printf("Media:%.f Voce esta reprovado\n",m);
    }
    system("pause");
}
                                                 
