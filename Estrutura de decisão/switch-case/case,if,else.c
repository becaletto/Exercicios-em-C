#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float n1,n2,resultado;
    char op,t;
    printf("Digite: numero op numero");
    printf("\n+ para adição\n- para subtração\n* para multiplicação\n/ para divisão:\n");
    scanf("%f %c %f",&n1,&op,&n2);
    switch(op)
    {
        case '+':
            resultado=n1+n2;
             printf("O resultado da soma é: %.1f",resultado);
        break;
        case '-':
            resultado=n1-n2;
             printf("O resultado da subtração é: %.1f",resultado);
             break;
        case '*':
            resultado=n1*n2;
             printf("O resultado da multiplicação é: %.1f",resultado);
        break;
        case '/':
            if(n2==0)
                printf("Não existe divisão por 0");
            else
            {
             resultado=n1/n2;
             printf("O resultado da divisão é: %.1f",resultado);
            }
        break;

    }
    return 0;
}
