#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL,"Portuguese");
float n1,n2,n3,m;
printf("Insira as tr�s notas:");
scanf("%f %f %f",&n1,&n2,&n3);
m=(n1+n2+n3)/3;
printf("Sua m�dia � %f\n",m);
if (m >= 6)
 printf("APROVADO");
else
 printf("REPROVADO");

    return 0;
}
  //solicite as tres notas e exiba a m�dia do aluno, exiba se ele foi aprovado ou reprovado
