#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float n1,n2,n3;
    float m;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite as notas:");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    m=n1;
    if(n2>n1 && n2>n3)
    {
             m=n2;
    }
    else
    {
        if(n3>n2 && n3>n1)
        {
                 m=n3;
        }
        else
        {
            m=n1;
        }
     }
      printf("O numero maior é:%.f\n",m);
      system("pause");
}
