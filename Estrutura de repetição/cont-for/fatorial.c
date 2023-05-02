#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int n,cont,f=1;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    for(cont=n;cont>=1;cont--)

        f=f*cont;
         printf("\nfatorial de %d é %d",n,f);

    return 0;
}
