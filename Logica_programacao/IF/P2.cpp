#include <stdio.h>
#include <stdlib.h> 

int main()
{            
  float num1;
  float num2;
  float s;
                          
  printf("Insira um numero:\n");
  scanf("%f",&num1);
                         
  printf("Insira outro numero:\n");
  scanf("%f",&num2);
             
  s = num1 + num2; 
  printf("Resultado:%.2f\n", s);
                          
  system ("pause");
}
