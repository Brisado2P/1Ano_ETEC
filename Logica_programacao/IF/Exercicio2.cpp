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
          printf("Voce é maior de idade\n");
  }
  else
  {
  	  printf("Voce é menor de idade\n");
  }
  system("pause");

}
