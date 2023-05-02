#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 50

int main()

{
    char nome[50];
    int i;

    printf ("Digite um nome: ");
    gets(nome);
    printf("As quatro primeiras letras do nome sao: ");

    for(i=0;i<4;i++)
    {
        printf("%c",nome[i]);
    }
    return 0;
}
