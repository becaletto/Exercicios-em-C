#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int cont,id,m,s;
    for(cont=1;cont<=10;cont++)
    {
     printf("Digite a idade da %d o. pessoa: \n",cont);
     scanf("%d",&id);
     s=s+id;
    m=s/10;
    }
    printf("A soma das idades �: %d\n",s);
    printf("A m�dia entre as idades �: %d",m);
    return 0;
}
