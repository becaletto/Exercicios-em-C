#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()

    {
     int i,soma1=0,soma2=0;
do {
        printf("Digite uma idade: ");
        scanf("%i",&i);
    {
        if (i==0)
         break;
        if(i<21)
        soma1++;
        if(i>50)
            soma2++;

            }
       }
       while(i!=0);
        printf("%i pessoas tem mais de 21 anos\n",soma1);
        printf("%i pessoas tem mais de 50 anos",soma2);
    return 0;
}
