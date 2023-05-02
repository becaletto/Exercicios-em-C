
#include <stdio.h>

int main()
{
 int i, j, num[2][2], soma=0;
 
    for(i=0;i<2;i++)
    {
        printf ("Entre com os valores do vetor %i\n",i+1);
        
    for(j=0;j<2;j++)
    {
        scanf("%i",&num[i][j]);
        soma+=num[i][j]+num[i][j];
    }
    }
    for(i=0;i<2;i++)
    {
        printf("Valores do vetor %i:\n",i+1);
        
    for(j=0;j<2;j++)
    {
        printf("%i \n",num[i][j]);
    }
    
    }
    printf("Soma dos valores digitados: %i",soma);

    return 0;
}
