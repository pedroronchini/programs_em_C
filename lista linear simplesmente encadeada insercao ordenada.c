// Lista Linear Simplesmente Encadeada
// Insercao com ordenacao

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

struct no
{
    int dado;
    struct no *prox;
};

typedef struct
{
    struct no *inicio;
} listalinearse;

void criaLista(listalinearse *q);
int  insereListaOrdenacao(listalinearse *q, int d);
void mostraLista(listalinearse q);
int  buscaLista(listalinearse q, int d);
int removee(listalinearse *q, int d);
int removee2(listalinearse *q, int d);

int main()
{
    listalinearse lista;
    int c, n;

    criaLista(&lista);

   /* printf("\nGerando numeros e inserindo na lista...\n\n");
    for (c=0; c < 10; c++)
    {
        srand(clock());
        n = rand()%50;
        printf("%3d", n);
        insereListaOrdenacao(&lista, n);
        Sleep(100);
    }*/

    insereListaOrdenacao(&lista, 1);
    removee2(&lista, 1);
    insereListaOrdenacao(&lista, 9);

    insereListaOrdenacao(&lista, 3);


    insereListaOrdenacao(&lista, 15);

    insereListaOrdenacao(&lista, 4);

    insereListaOrdenacao(&lista, 10);

    insereListaOrdenacao(&lista, 25);
    removee2(&lista, 3);
    removee2(&lista, 10);
    removee2(&lista, 25);


    /*removee(&lista, 9);
    removee(&lista, 1);
    removee(&lista, 3);
    removee(&lista, 15);
    removee(&lista, 25);*/

    printf("\n\nApresentando a lista...\n\n");
    mostraLista(lista);
    printf("\n\n");

    /*
    printf("\n\nBuscando na lista...\n");
    n = buscaLista(lista,11);
    if (n == 0)
        printf("\nDado nao encontrado...\n\n");
    else
        printf("\nDado encontrado...\n\n");
    */
}

void criaLista(listalinearse *q)
{
    q->inicio = NULL;
}

int  insereListaOrdenacao(listalinearse *q, int d)
{
    struct no *aux, *noAnterior, *noAtual;
    aux = (struct no*) malloc(sizeof(struct no));
    if (aux == NULL)
        return 0;

    // lista vazia
    if (q->inicio == NULL)
    {
        aux->dado = d;
        aux->prox = NULL;
        q->inicio = aux;
        return 1;
    }

    // inser��o no inicio
    if (q->inicio != NULL && d < q->inicio->dado)
    {
        aux->dado = d;
        aux->prox = q->inicio;
        q->inicio = aux;
        return 1;
    }

    // localizar a posi��o de inser��o na lista
    noAnterior = NULL;
    noAtual = q->inicio;
    while (noAtual != NULL && d > noAtual->dado)
    {
        noAnterior = noAtual;
        noAtual = noAtual->prox;
    }

    // inser��o no meio da lista
    if (noAtual != NULL)
    {
        aux->dado = d;
        noAnterior->prox = aux;
        aux->prox = noAtual;
    }
    // inser��o no final da lista
    else
    {
        aux->dado = d;
        noAnterior->prox = aux;
        aux->prox = NULL;
    }
    return 1;
}

void mostraLista(listalinearse q)
{
    struct no *aux;

    aux = q.inicio;
    if (aux == NULL)
    {
        printf("\nLista vazia...\n");
    }
    else
    {
        while (aux != NULL)
        {
            printf("%3d", aux->dado);
            aux = aux->prox;
        }
    }
}

int  buscaLista(listalinearse q, int d)
{
    struct no *aux;
    aux = q.inicio;
    while (aux != NULL)
    {
        if (aux->dado == d)
            return 1;
        aux = aux->prox;
    }
    return 0;
}

int removee(listalinearse *q, int d)
{
    struct no *atras, *aux;
    int encontrou = 0;

    aux = q->inicio;
    atras = q->inicio;

    while(encontrou == 0 && aux != NULL)
    {
        if(aux->dado == d)
            encontrou = 1;
        else
        {
            atras = aux;
            aux = aux->prox;
        }

    }
    if(encontrou == 1)
    {
        if(aux == atras && aux == q->inicio) // verificar se � o primeiro n�
        {
            printf("\nRemovendo o primeiro no: %d", aux->dado);
            q->inicio = aux->prox;
        }

        else
        {
            printf("\nRemovendo o seguinte no: %d", aux->dado);
            atras->prox = aux->prox;
        }

    free(aux);
    aux = NULL;
    return 1;
    }
    printf("\nDado nao encontrado...\n");
    return 0;
}



int removee2(listalinearse *q, int d) //minha fun�ao
{
    struct no *aux, *atual, *frente;


    if (q->inicio == NULL)//se lista vazia
    {
        printf("\nLista vazia...\n\n");
        return 0;
    }

    if(q->inicio->dado == d)//remo�ao do primeiro n�
    {
        if (q->inicio->prox == NULL)//remo�ao de n� �nico
        {
            printf("\nRemocao de no unico: %d...\n\n", q->inicio->dado);
            aux = q->inicio;
            q->inicio = NULL;
            free(aux);
            return 1;
        }
        else if(q->inicio->prox != NULL) //remo�ao de primeiro n� entre outros
        {
            printf("\nRemocao do primeiro no entre outros: %d...\n\n", q->inicio->dado);

            aux = q->inicio;
            q->inicio = q->inicio->prox;
            free(aux);

            return 1;
        }
    }
    else
    {

        atual = q->inicio;
        frente = q->inicio->prox;
        while(frente->prox != NULL)// remo�ao do ultimo no
        {
            if(frente->dado == d) //remocao no meio dos nos
            {
             printf("\nRemovendo valor no meio dos nos: %d\n", frente->dado);
             atual->prox = frente->prox;
             free(frente);
             return 1;
            }
            atual = frente;
            frente = frente->prox;
        }
    //printf("Dado atual: %d\tDado frente: %d", atual->dado, frente->dado);
        if(frente->dado != d)
        {
            printf("\nDado nao encontrado...\n");
            return 0;
        }
        else
        {
            printf("\nRemovendo o ultimo no %d...\n", frente->dado); //remo�ao do ultimo no
            atual->prox = NULL;
            free(frente);
            return 1;
        }
    }
    return 0;
}





