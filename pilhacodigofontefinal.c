#include <stdio.h>
#include <stdlib.h>

#define TRUE  1
#define FALSE 0

struct no
{
    int dado; // offset 0 Bytes
    struct no *prox; // offset 2 Bytes
};

typedef struct
{
    struct no *topo; // offset 0 Bytes
} pilha;

void create(pilha *s);
int  push(pilha *s, int d);
int  pop(pilha *s, int *d);
int  isEmpty(pilha s);
void mostraPilha(pilha s);
int  dadoTopo(pilha s);
int  contaNosPilha(pilha s);

main()
{
    int n;
    pilha p1;

    create(&p1);
    mostraPilha(p1);

    n = push(&p1, 1);
    if (n == 1)
        printf("Empilhou com sucesso\n");
    else
        printf("Sem memoria\n");

    push(&p1, 2);
    push(&p1, 3);
    printf("\nDado que esta no topo = %d\n\n", dadoTopo(p1));
    push(&p1, 4);
    push(&p1, 5);
    push(&p1, 5);
    push(&p1, 6);
    push(&p1, 2);

    printf("\nDado que esta no topo = %d\n\n", dadoTopo(p1));
    mostraPilha(p1);
    printf("\nTotal de nos = %d \n\n", contaNosPilha(p1));

    if (!isEmpty(p1))
    {
        pop(&p1,&n);
        printf("\nDesempilhou: %d \n",n);
    }
    printf("\nDado que esta no topo = %d\n\n", dadoTopo(p1));
    printf("\nTotal de nos = %d \n\n", contaNosPilha(p1));
}

void create(pilha *s)
{
    s->topo=NULL;
}

int push(pilha *s, int d)
{
    struct no *aux;
    aux =(struct no *)malloc(sizeof(struct no));
    if (aux==NULL)
        return FALSE;
    aux->dado=d;
    aux->prox= s->topo;
    s->topo=aux;
    printf("Empilhou %d\n", aux->dado);
    return TRUE;
}

int pop(pilha *s, int *d)
{
    struct no *aux;
    if (s->topo==NULL)
        return FALSE;
    aux = s->topo;
    s->topo = (s->topo)->prox;
    *d = aux->dado;
    free(aux);
    return TRUE;
}

int isEmpty(pilha s)
{
    if (s.topo == NULL)
        return TRUE;
    return FALSE;
}

void mostraPilha(pilha s)
{
    struct no *aux;
    aux = s.topo;

    if (aux == NULL)
    {
        printf("\nPilha vazia...\n\n");
    }
    else
    {
        while (aux != NULL)
        {
            printf("Dado = %d\n", aux->dado);
            aux = aux->prox;
        }
    }
}

int  dadoTopo(pilha s)
{
    if (s.topo == NULL)
        return -1;
    return s.topo->dado;
}

int contaNosPilha(pilha s)
{
    struct no *aux;
    int c = 0;
    aux = s.topo;
    while (aux != NULL)
    {
        c++;
        aux = aux->prox;
    }
    return c;
}
