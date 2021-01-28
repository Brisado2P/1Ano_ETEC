#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    // DECLARACAO DAS VARIAVEIS
    float n1, n2, n3, menor, media, exame, media_final;
    // LEITURA E VERIFICACAO DAS NOTAS
    printf("Digite a nota 1:");
    scanf("%f",&n1);
    if(n1>=0 && n1<=10)
    {
        printf("Digite a nota 2:");
        scanf("%f",&n2);
        if(n2>=0 && n2<=10)
        {
            printf("Digite a nota 3:");
            scanf("%f",&n3);
            if(n3>=0 && n3<=10)
            {
                // ELIMINA A MENOR NOTA     
                menor = n1;
                if(n2 < menor)
                {
                    menor = n2;
                }
                if(n3 < menor)
                {
                    menor = n3;
                }
                // CALCULA A MEDIA SEM A MENOR NOTA
                media = (n1 + n2 + n3 - menor) / 2;
                printf("\nmédia = %.1f\n", media);

                // VERIFICA SE APROVADO
                if(media >= 7)
                {
                    printf("Voce tirou %.1f, Aprovado :)",media);
                }
                else
                {
                    // VERIFICA SE REPROVADO
                    if(media <= 4)
                    {
                        printf("Voce tirou %.1f, Reprovado :(",media);
                    }
                    else
                    {
                        // ESTA EM EXAME, PEDE-SE A NOVA NOTA
                        printf("Voce ficou em exame!\n");
                        printf("Digite nota do exame:");
                        scanf("%f",&exame);
                        
                        // CALCULA A MEDIA DO EXAME
                        media_final = (media + exame) / 2;
                        
                        // VERIFICA SE ESTA APROVADO OU NÃO NO EXAME
                        if(media_final >= 5)
                        {
                            printf("Voce tirou %.1f, Aprovado em exame :]",media_final);
                        }
                        else
                        {
                            printf("Voce tirou %.1f, Reprovado em exame :|",media_final);
                        }
                    }
                             
                }
            }
            else
            {
                printf("nota 3 invalida\n");
            }
        }
        else
        {
            printf("nota 2 inválida\n");
        }
        
            
    }
    else
    {
        printf("nota 1 inválida\n");
    }
    system("\npause");
}
