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
    struct no *topo;
} pilha;

void create(pilha *s);// Modifica a pilha
int push(pilha *s, int d);// Modifica a pilha
int pop(pilha *s, int *d);// Modifica a pilha
int isEmpty(pilha s);// Não modifica a pilha
void mostraPilha(pilha s);
int dadoTopo(pilha s);
int contaPilha(pilha s);

main()
{
    int n;
    pilha p1;

    create(&p1);

    push(&p1, 1);
    push(&p1, 2);
    push(&p1, 3);

    printf("\nDado que esta na pilha: %d\n", dadoTopo((p1)));

    mostraPilha(p1);

    printf("\nTotal de nos: %d\n\n", contaPilha(p1));

    if (!isEmpty(p1))
    {
        pop(&p1,&n);
        printf("Desempilhou: %d \n",n);
    }
    printf("\nTotal de nos: %d\n\n", contaPilha(p1));
}

void create(pilha *s)
{
    s->topo=NULL;
}

int push(pilha *s, int d)
{
    struct no *aux;
    aux=(struct no *)malloc(sizeof(struct no));
    if (aux==NULL)
        return FALSE;
    aux->dado=d;
    aux->prox= s->topo;
    s->topo=aux;
    return TRUE;
}

int pop(pilha *s, int *d)
{
    struct no *aux;
    if (s->topo==NULL)
        return FALSE;
    aux= s->topo;
    s->topo =(s->topo)->prox;
    *d=aux->dado;
    free(aux);
    return TRUE;
}

int isEmpty(pilha s)
{
    if (s.topo == NULL)
        return TRUE;
    return FALSE;
}
// Se é ponteiro, então APONTA ->
//Se não é ponteiro, então PONTO .

void mostraPilha(pilha s)
{
    struct no *aux;
    aux = s.topo;

    if(aux == NULL)
    {
        printf("\nPilha vazia ... \n\n");
    }
    else
    {
        while(aux != NULL)
        {
            printf("Dado = %d\n", aux->dado);
            aux = aux->prox;
        }
    }
}

int dadoTopo(pilha s)
{
    if (s.topo == NULL)
    {
        return -1;
    }
    return s.topo->dado;

}

int contaPilha(pilha s)
{
    struct no *aux;
    int c = 0;

    aux = s.topo;

    while(aux != NULL)
    {
        c++;
        aux = aux->prox;
    }
    return c;
}
