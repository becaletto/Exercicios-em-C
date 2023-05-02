#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()


    {
     int cont,soma=0;
     for(cont=1;cont<=100;cont++)
    {
        if (cont%5 == 0)
            continue;
        soma+=cont;
    }
    printf("%i",soma);
    return 0;
}
