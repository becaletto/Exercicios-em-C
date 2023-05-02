#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()

    {int cont,r;
     for(cont=1;cont<=100000;cont++)
{
    if ((cont%11 == 0)&&(cont%13 == 0)&&(cont%17 == 0))
    {
        printf("%i",cont);
    break;


}

    return 0;
}
