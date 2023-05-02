#include <stdio.h>
#include <stdlib.h>

    struct pesquisa
    {
        int idade;
        char sexo[1];
        float salario;
        int filhos;
    };

int main()

{
    struct pesquisa dados[3];
    int i, q;
    float somaSalario=0;
    float mediaSalario=0;
    int somaFilhos=0;
    int mediaFilhos=0;

    printf("Quantidade de pessoas: ");
    scanf("%i",&q);

    for(i=0;i<q;i++)
    {
        printf("Pessoa %i\n",i+1);
        puts("Idade: ");
        scanf("%i",&dados[i].idade);
        getchar();
        puts("Sexo (F ou M): ");
        gets(dados[i].sexo);
        getchar();
        puts("Salario: ");
        scanf(" %f",&dados[i].salario);
        somaSalario+=dados[i].salario;
        mediaSalario=somaSalario/q;
        getchar();
        puts("Numero de filhos: ");
        scanf(" %i",&dados[i].filhos);
        somaFilhos+=dados[i].filhos;
        mediaFilhos=somaFilhos/q;
        getchar();
    }
    printf("Media salarial: %.2f\n",mediaSalario);
    printf("Media de filhos: %.2i\n",mediaFilhos);

    return 0;
}
