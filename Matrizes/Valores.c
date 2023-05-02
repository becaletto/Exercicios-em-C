
#include <stdio.h>

int main()
{
 int i, j, num[3][3],soma=0;
 
    for(i=0;i<3;i++)
    {
        printf ("Entre com os valores do vetor %i\n",i+1);
        
    for(j=0;j<3;j++)
    {
        scanf("%i",&num[i][j]);
        if (num[i][j]%2==0)
        puts("-1");
        else
        puts("+1");
    }
    }


    return 0;
}
