
/*
 * File: Cadastro.cpp
 * Author: Victor Guilherme Ferreira Soares <vg342093@gmail.com>
 * Criado dia 22 de Abril de 2018, 20:19
 */
using namespace std;
#include <fstream>
#include <string.h>
#include <iostream>
#include <cstdlib>  //Este cabeçalho (cstdlib) define várias funções de propósito geral
#include <stdlib.h> //incluindo gerenciamento de memoria dinãmica, geração de 
#include <stdio.h>  //numeros aleatórios, comunicação com o ambiente, aritmética de inteiros, busca, classificação e conversão.
#include <locale.h> //biblioteca para assentuação
#define SIZE 200
 
char nome[SIZE][50];
char email[SIZE][50];
int rg[SIZE];
int op;
void cadastro();
void pesquisa();
void lista();

int main(void)
{
   setlocale(LC_ALL,"Portuguese");
  
   do
   {
   	  system("cls");
   	  printf("\n -----Menu----\n1- Cadastrar\n2- Para listar todos\n3- Para pesquisar\n4- Para sair");
   	  scanf("%d", &op);
   	  switch(op)
   	  {
   	  	case 1:
   	  		cadastro();
   	  		
   	  		break;
   	  	
		case 2:
		    lista();
			
			break;
			
		case 3:
		    pesquisa();
		
			break;
			
		case 4:
		    system("exit");
		
			break;
				 	
   	  	default:
			printf("Opição invalida");
			getchar();
			getchar();
			break; 
				
	  }
   }while(op!=4);
   // salvar os dados aqui:


	ofstream myfile;
	myfile.open ("data.txt");
	myfile <<nome << '#' << email << '#' << rg << '\n';
	myfile.close();

	//Final de codigo
	system("pause");
}

void lista()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	
	for(i=0;i<SIZE;i++)
	{
		   if(rg[i]>0)
		  {
		    
		      printf("\nNome: %s\nEmail: %s\nRG: %d", nome[i],email[i], rg[i]);
	      }
	      else
	      {
	      	break;
		  }
    }
    getchar();
    getchar();
}

void cadastro()
{
	setlocale(LC_ALL,"Portuguese");
	static int linha;
	do
	{
		setlocale(LC_ALL,"Portuguese");
		printf("\nDigite o primeiro nome:");
		scanf("%s",&nome[linha]);
		printf("\nDigite o email:");
		scanf("%s",&email[linha]);
		printf("\nDigite o RG:");
		scanf("%d",&rg[linha]);		
		printf("\nDigite 1 para continuar ou outro valor para sair:");
		scanf("%d", &op);
		linha++;
	}while(op==1);
}//fim da função cadastro


void pesquisa()
{
	setlocale(LC_ALL,"Portuguese");
    int rgPesquisa;
    int i;
    char emailPesquisa[50];
    do
    {
   	 printf("\nDigite 1 para pesquisar por RG ou 2 para pesquisar por email:");
	 scanf("%d", &op);
	 switch(op)
	 {
	 	case 1:
	 	    printf("\nDigite o RG: ");
	 	    scanf("%d", &rgPesquisa);
	 	    for(i=0;i<SIZE;i++)
	 	      {
	 	    	 if(rg[i]==rgPesquisa)
	 	    	 {
	 	    	     printf("\nNome: %s\nEmail: %s\nRG: %d", nome[i],email[i], rg[i]);	
				 }
			  }
	 	    
	 	    break;
	 	case 2:
		    printf("\nDigite o email:");
		    scanf("%s", &emailPesquisa);
		    for(i=0;i<SIZE;i++)
	 	      {
	 	    	 if(strcmp(email[i], emailPesquisa)==0)
	 	    	 {
	 	    	     printf("\nNome: %s\nEmail: %s\nRG: %d", nome[i],email[i], rg[i]);	
				 }
			  }
	 	    
		    break;
		default:
		    printf("\nOpição invalida"); 
		    break;	    
	 	
	 }
	 printf("\nDigite 1 para continuar pesquisando: ");
	 scanf("%d", &op); 	 
    }while(op==1);	
}

