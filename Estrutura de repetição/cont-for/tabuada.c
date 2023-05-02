#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int cont,n,r;
    printf(" \nDigite um numero para ver sua tabuada: \n ");
    scanf("%i",&n);
    for(cont=0;cont<=10;cont++)
    {
        r=n*cont;
         printf("\n%d x %d = %d\n",n,cont,r);
    }
    return 0;
}
