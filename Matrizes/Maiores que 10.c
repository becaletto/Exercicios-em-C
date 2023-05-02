
#include <stdio.h>

int main()
{
 int i, j, num[6][6],soma=0;
 
    for(i=0;i<2;i++)
    {
        printf ("Entre com os valores do vetor %i\n",i+1);
        
    for(j=0;j<2;j++)
    {
        scanf("%i",&num[i][j]);
        if(num[i][j]>10)
        soma++;
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
    printf("Quantidade de numeros maiores que 10 digitados: %i",soma);


    return 0;
}
