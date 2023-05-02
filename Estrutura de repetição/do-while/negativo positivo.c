#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,f=1,cont;
do
   {
    printf("Digite um numero positivo: ");
    scanf("%i",&n);
   } while (n<0);
    for(cont=n;cont>=1;cont--)
    f=f*cont;
    printf("Fatorial de %i é %i",n,f);
   }



