#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"Portuguese");
int a,b;
printf("Insira dois numeros inteiros:");
scanf("%d %d",&a,&b);
if (a == b)
    printf("Os valores digitados s�o iguais\n");
else
    printf("Os valores digitados s�o diferentes\n");
    return 0;
}
