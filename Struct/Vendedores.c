#include <stdio.h>
#include <stdlib.h>

struct vendedor
{
    int matricula;
    char nome[50];
    float totalVenda;
    float comissao;
};

int main()

{
    struct vendedor vend[10];
    int i;
    float soma=0;

    for(i=0;i<10;i++)
    {
        printf("Insira os dados do vendedor %i\n",i+1);
        puts("Nome:");
        gets(vend[i].nome);
        
        puts("Matricula: ");
        scanf("%i",&vend[i].matricula);
        puts("Total de vendas do mes: ");
        scanf("%f",&vend[i].totalVenda);
        getchar();

        if(vend[i].totalVenda > 5000)
        {
            vend[i].comissao = vend[i].totalVenda*0.1;
            printf ("Comissao: %f\n\n",vend[i].comissao);
            soma+=vend[i].comissao;
        }
        else
        {
            vend[i].comissao=0;
        }
       
    }
     for(i=0;i<10;i++)
        {
            printf("\n\nDados do vendedor %i\n",i+1);
            printf("Nome: %s\n",vend[i].nome);
            printf("Matricula: %i\n",vend[i].matricula);
            printf("Total vendido: %f\n",vend[i].totalVenda);
            printf("Comissão: %f\n",vend[i].comissao);
            
        }
        printf("\n\nTotal de comissão: %f",soma);






    return 0;
}