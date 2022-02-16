/*+----------------------------------------------------------------------------------+
  | pesquisabinaria.c - implementacao de referencia do algoritmo de pesquisa binaria |
  +----------------------------------------------------------------------------------+*/
#include <stdio.h>

void bubbleSort(int v[], int tam);
int buscaBinaria(int v[],int dado, int inicio, int fim);
main()
{
    int conjunto[5] = {10,20,15,5,9}, r, i;

    // ordenação é obrigatória, antes de fazer a busca binária
    bubbleSort(conjunto,5);
    for (i=0; i < 5; i++)
         printf("%d ", conjunto[i]);

    printf("\n\n");

    r = buscaBinaria(conjunto,9,0,4);

    if (r != -1)
         printf("Dado encontrado no conjunto\n");
    else
         printf("Dado nao encontrado no conjunto\n");

    printf("\n\n");
}

void bubbleSort(int v[], int tam)
{
 int i,j,aux;

 for(i = 0; i < tam-1; i++)
    for(j = tam-1; j > i; j--)
    {
        if (v[j] < v[j-1])
        {
            aux = v[j];
            v[j] = v[j-1];
            v[j-1] = aux;
        }
    }
}

int buscaBinaria(int v[],int dado, int inicio, int fim)
{
    int meio = (inicio + fim)/2;

    if (v[meio] == dado)
        return(meio);

    if (inicio >= fim)
        return(-1);

    if (dado < v[meio])
        buscaBinaria(v,dado,inicio,meio-1);
    else
       buscaBinaria(v,dado,meio+1,fim);
}
