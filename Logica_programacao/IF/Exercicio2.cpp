#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
  setlocale(LC_ALL,"Portuguese");
  int n;
  printf("Digite sua idade:");
  scanf("%d",&n);
  if(n>18)
  {  
          printf("Voce � maior de idade\n");
  }
  else
  {
  	  printf("Voce � menor de idade\n");
  }
  system("pause");

}
