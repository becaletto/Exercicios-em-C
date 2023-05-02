
#include <stdlib.h>
int main (void)
{
  int cont, ra, n1, n2, m, soma = 0, aprovado = 0;

do
        {
      printf ("\nAluno %i\n", cont);
      printf ("Digite o ra: ");
      scanf ("%i", &ra);
      do
      {
      printf("Digite a nota da primeira prova: ");
      scanf ("%i",&n1);
      }while((n1<0)||(n1>10));
      do
{
      printf("Digite a nota da segunda prova: ");
      scanf ("%i",&n2);
      }while((n2<0)||(n2>10));
      m = (n1 + n2) / 2;
      soma += m;
      printf ("Média %i\n", m);
      if (m >= 6)
	{
	  printf ("Aprovado\n");
	  aprovado += 1;
	}
      else
	printf ("Reprovado\n");
    }

  printf ("A média da sala é: %i\n", soma / 10);
  printf ("A quantidade de alunos aprovados é: %i", aprovado);
  return 0;
}
