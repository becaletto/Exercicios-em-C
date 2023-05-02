#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL,"Portuguese");
float n1,n2,n3,m;
printf("Insira as três notas:");
scanf("%f %f %f",&n1,&n2,&n3);
m=(n1+n2+n3)/3;
printf("Sua média é %f\n",m);
if (m >= 6)
 printf("APROVADO");
else
 printf("REPROVADO");

    return 0;
}
  //solicite as tres notas e exiba a média do aluno, exiba se ele foi aprovado ou reprovado
