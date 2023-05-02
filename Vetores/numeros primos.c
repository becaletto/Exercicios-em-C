#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 9
 main()
{
    setlocale (LC_ALL, "Portuguese");
   int valores[MAX];
   int i,denominador,divisores;
   int impar;
   for (i =0; i<9; i++)
   {
       printf ("\nDigite um número: ");
       scanf ("%d", &valores[i]);
   }
   for (i = 0; i<9; i++)
   { divisores=0;
       for(denominador=1;denominador<=valores[i];denominador++)
       {
            if (valores[i]%denominador==0)
                divisores++;
        }
        if (divisores==2)
            printf ("\nPosição %d - primo", i);
   }
    return 0;
}

