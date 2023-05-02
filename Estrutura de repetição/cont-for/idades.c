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
    printf("A soma das idades é: %d\n",s);
    printf("A média entre as idades é: %d",m);
    return 0;
}
