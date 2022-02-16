/*+-----------------------------------------------------------------+
  | bubble.c - implementação de referencia do algoritmo Bubble Sort |
  +-----------------------------------------------------------------+*/

#include <stdio.h>

void bubbleSort(int v[], int tam);

main()
{
    int conjunto[5] = {10,20,15,5,9}, i;

    bubbleSort(conjunto,5);

    for (i=0; i < 5; i++)
         printf("%d ", conjunto[i]);

    printf("\n\n");
}

void bubbleSort(int v[], int tam)
{
 int i,j,aux;

 for(i = 0; i < tam-1; i++)
    for(j = tam-1; j > i; j--)
    {
        if (v[j] <  v[j-1])
        {
            aux = v[j];
            v[j] = v[j-1];
            v[j-1] = aux;
        }
    }
}
