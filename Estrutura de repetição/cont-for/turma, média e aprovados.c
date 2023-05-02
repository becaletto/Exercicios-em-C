#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  int cont, ra, n1, n2, m, soma = 0, aprovado = 0;

  for (cont = 1; cont <= 10; cont++)
    {
      printf ("\nAluno %i\n", cont);
      printf ("Digite o ra: ");
      scanf ("%i", &ra);
      printf
	("Digite a nota da primeira prova, em seguida da segunda prova: ");
      scanf ("%i %i", &n1, &n2);
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