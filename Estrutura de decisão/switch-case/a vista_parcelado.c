#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vp,vt;
    char f;
    printf("Informe o valor do produto: R$");
    scanf("%f",&vp);
    printf("HOJE ESTAMOS COM CINCO PORCENTO DE DESCONTO PARA PAGAMENTOS A VISTA, APROVEITE!");
    printf("\nInforme a forma de pagamento: ");
    printf("V para pagamentos a vista e P para pagamentos a prazo: ");
    scanf(" %c",&f);
    switch(f)
    {
        case 'V':
            vt=vp-(vp*0.1);
             printf("Valor total a ser pago: R$%.1f",vt);
        break;
        case 'P': printf("Valor total a ser pago: R$%.1f",vp);
        break;
        default:printf("Forma de pagamento invalida");
    }
    return 0;
}
