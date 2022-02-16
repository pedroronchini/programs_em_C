/*+----------------------------------------------------------------+
  | quicksort.c - implementação de referencia do algoritmo Quick Sort |
  +----------------------------------------------------------------+*/

#include <stdio.h>

void quickSort(int v[], int esq, int dir);

main()
{
    int conjunto[5] = {10,20,15,5,9}, i;

    quickSort(conjunto,0,4);

    for (i=0; i < 5; i++)
         printf("%d ", conjunto[i]);

    printf("\n\n");
}

void quickSort(int v[], int esq, int dir)
{
    int i=esq, j=dir, x, y;
    x = v[(esq+dir)/2];
    do
    {
        while ((v[i] < x) && (i < dir))
                i++;
        while ((x < v[j]) && (j > esq))
                j--;

        if (i <= j)
        {
            y = v[i];
            v[i] = v[j];
            v[j] = y;
            i++;
            j--;
        }
    } while (i <= j);

    if (esq < j)
        quickSort(v, esq, j);
    if (i < dir)
        quickSort(v, i, dir);
}
