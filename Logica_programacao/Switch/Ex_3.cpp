#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n, n1, result;
    char var;

    printf("Digite dois numeros:");
    scanf("%d",&n);
    scanf("%d",&n1);
    printf("Digite um sinal:");
    scanf(" %c",&var);
    switch(n, n1, var){
                       case 'x' : result=n*n1; printf("Resultado: %d\n", result); break;   
                       case '.' : result=n*n1; printf("Resultado: %d\n", result); break;   
                       case '*' : result=n*n1; printf("Resultado: %d\n", result); break;    
                       case '-' : result=n-n1; printf("Resultado: %d\n", result); break; 
                       case '/' : result=n/n1; printf("Resultado: %d\n", result); break;
                       case ':' : result=n/n1; printf("Resultado: %d\n", result); break;
                       case '+' : result=n+n1; printf("Resultado: %d\n", result); break;
                       default: printf("Invalido\n");
                       }
    system("pause");
}
                       
    
