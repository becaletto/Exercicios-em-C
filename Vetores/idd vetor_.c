#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Quantas pessoas serao digitadas: ");
    scanf("%i",&n);

    char nome[n][50];
    int idade[n];

    for (i=0;i<n;i++)
    {
        printf("\nDados da %i° pessoa\n",i+1);
        printf("\nNome: \n");
        scanf("%s",&nome[i][0]);
        printf("\nIdade: \n");
        scanf("%i",&idade[i]);
    }

    int maior, posMaior;

    maior = idade[0];
    posMaior = 0;

    for(i=1;i<n;i++)
    {
        if (idade[i]>maior)
        {
            maior = idade[i];
            posMaior=i;
        }
    }

    printf ("Pessoa mais velha = %s", nome[posMaior]);


    return 0;
}
