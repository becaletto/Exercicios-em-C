#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vet[9], i;

  for(i=0;i<9;i++)
  {
  printf("Digite um valor: ");
  scanf("%i",&vet[i]);
  }

  for(i=0;i<9;i++)
  {
      if (vet[i]%2==0)
        printf ("\nposicao %i numero %i\n",i,vet[i]);
  }


    return 0;
}
