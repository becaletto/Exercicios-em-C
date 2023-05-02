#include <stdio.h>
#include <stdlib.h>

    struct aluno
    {
        char nome[50];
        char email[50];
        float nota[5];
    };

int main()

{
    struct aluno al[5];
    int i,x ;
    float m=0;
    float soma=0;


    for(i=0;i<5;i++)
    {
        soma=0;
        m=0;
        printf("Aluno %i\n",i+1);
        puts("Digite o nome:");
        gets(al[i].nome);
        getchar();
        puts("Digite o email:");
        gets(al[i].email);
        getchar();

        for(x=0;x<5;x++)
        {
            printf("Digite a nota %i: \n",x+1);
            scanf("%f",&al[i].nota[x]);
            getchar();
            soma+=al[i].nota[x];
        }

    m = soma/5;
     printf("Media do aluno: %.2f\n",m);


    }



    return 0;
}
