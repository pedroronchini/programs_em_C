#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct no
{
    int dado;
    struct no *prox;
};

typedef struct
{
    struct no *inicio;
    struct no *fim;
} fila;

void create(fila *q);
int  isEmpty(fila q);
int  insert(fila *q, int d);
int  removee(fila *q, int *d);

main( )
{
    fila f;
    int n;

    create(&f);

    insert(&f,12);
    insert(&f,320);
    insert(&f,413);

    while (!isEmpty(f))
    {
        removee(&f,&n);
        printf("%d\n",n);
    }
}

void create(fila *q)
{
    q->inicio=NULL;
    q->fim=NULL;
}

int insert (fila *q, int d)
{
    struct no *aux;
    aux = (struct no*)malloc(sizeof(struct no));
    if (aux==NULL)
        return (FALSE);

    aux->dado=d;
    aux->prox=NULL;
    if (q->inicio==NULL)
        q->inicio=aux;
    if (q->fim!=NULL)
        q->fim->prox=aux;

    q->fim=aux;
    return(TRUE);
}

int removee(fila *q, int *d)
{
    struct no *aux;
    if (q->inicio==NULL)
        return (FALSE);

    aux=q->inicio;
    q->inicio=aux->prox;
    if (q->inicio == NULL)
        q->fim = NULL;
    *d=aux->dado;
    free(aux);
    return(TRUE);
}

int isEmpty(fila q)
{
    if (q.inicio == NULL)
        return TRUE;
    return FALSE;
}
