#include <stdio.h>
#include <stdlib.h>

//Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
//mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
//os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.

int main()
{
       int i, n, soma = 0, m;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%i",&n);

    int vet[n];

    for(i=0;i<n;i++)
    {
        printf("Digite o numero: ");
        scanf("%i",&vet[i]);
    }

     for(i=0;i<n;i++)
    {
        if (vet[i]%2=0)
        soma = soma + vet[i];
    }

    m = soma / n;

    printf("\nMedia dos pares: %i\n",m);


    return 0;
}
