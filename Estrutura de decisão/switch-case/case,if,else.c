#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float n1,n2,resultado;
    char op,t;
    printf("Digite: numero op numero");
    printf("\n+ para adi��o\n- para subtra��o\n* para multiplica��o\n/ para divis�o:\n");
    scanf("%f %c %f",&n1,&op,&n2);
    switch(op)
    {
        case '+':
            resultado=n1+n2;
             printf("O resultado da soma �: %.1f",resultado);
        break;
        case '-':
            resultado=n1-n2;
             printf("O resultado da subtra��o �: %.1f",resultado);
             break;
        case '*':
            resultado=n1*n2;
             printf("O resultado da multiplica��o �: %.1f",resultado);
        break;
        case '/':
            if(n2==0)
                printf("N�o existe divis�o por 0");
            else
            {
             resultado=n1/n2;
             printf("O resultado da divis�o �: %.1f",resultado);
            }
        break;

    }
    return 0;
}
