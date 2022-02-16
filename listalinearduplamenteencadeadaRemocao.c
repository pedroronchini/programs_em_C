#include <stdio.h>
#include <stdlib.h>

struct no
{
	struct no *ant;
	int dado;
	struct no *prox;
};

typedef struct
{
	struct no *inicio;
	struct no *fim;
} listalinearde;

void create(listalinearde *q);
int  insert(listalinearde *q, int d);
void mostraInicioFim(listalinearde q);
void mostraFimInicio(listalinearde q);
int  busca(listalinearde q, int d);
int  removee(listalinearde *q, int d);

main()
{
    listalinearde L;

    create(&L);
    //removee(&L,20);

    insert(&L,20);
    insert(&L,40);
    insert(&L,30);
    insert(&L,200);
    insert(&L,400);
    insert(&L,300);

    removee(&L,30);
    removee(&L,200);
    removee(&L,400);


    mostraInicioFim(L);


    printf("\n\n");
    //mostraFimInicio(L);

    if (busca(L,50) == 1)
        printf("\n\nEncontrado...\n\n");
    else
        printf("\n\nNao encontrado...\n\n");

    //printf("\n%d\n\n", L.inicio->prox->prox->dado);
}

void create(listalinearde *q)
{
    q->inicio = NULL;
    q->fim = NULL;
}

int  insert(listalinearde *q, int d)
{
struct no *aux;

aux = (struct no*)malloc(sizeof(struct no));

if(aux == NULL)
    return 0;
    aux->dado = d;
    if(q->inicio == NULL)
    {
        q->inicio = aux;
        q->fim = aux;
        aux->ant = NULL;
        aux->prox = NULL;
        return 1;

    }
    else
    {
            aux->prox = NULL;
            q->fim->prox = aux;
            aux->ant = q->fim;
            q->fim=aux;


        return 1;


    }
}

void mostraInicioFim(listalinearde q)
{
    struct no *aux;

    if (q.inicio == NULL)
        printf("\nLista vazia...\n\n");
    else
    {
        aux = q.inicio;
        while (aux != NULL)
        {
               printf("%d ", aux->dado);
               aux = aux->prox;
        }
    }
}

void mostraFimInicio(listalinearde q)
{
    struct no *aux;

    if (q.inicio == NULL)
        printf("\nLista vazia...\n\n");
    else
    {
        aux = q.fim;
        while (aux != NULL)
        {
               printf("%d ", aux->dado);
               aux = aux->ant;
        }
    }
}

int busca(listalinearde q, int d)
{
    struct no *aux;
    if (q.inicio == NULL)
    {
        printf("\nLista vazia...\n\n");
        return 0;
    }

    aux = q.inicio;
    while (aux != NULL)
    {
           if (aux->dado == d)
               return 1;

           aux = aux->prox;
    }
    return 0;
}

int removee(listalinearde *q, int d)
{
    struct no *aux,*atras,*frente;

    if(q->inicio == NULL)
    {
        printf("\nLISTA VAZIA.");
        return 0;
    }


    if(q->inicio->dado == d)
    {


            //REMOVENDO PRIMEIRO NO DE UMA LISTA COM UM NO INSERIDO
        if(q->inicio == q->fim)
        {
        aux = q->inicio;
        q->inicio = NULL;
        q->fim = NULL;
        free(aux);
        return 1;
        }
    //REMOVENDO PRIMEIRO NO DE UMA LISTA COM UM OU MAIS NÓS INSERIDOS
    else
    {
        aux = q->inicio;
        q->inicio = q->inicio->prox;
        q->inicio->ant = NULL;
        free(aux);
            return 1;

    }
    }

    if(q->fim->dado == d)
    {
        aux = q->fim;
        q->fim = q->fim->ant;
        q->fim->prox = NULL;
        free(aux);
        return 1;

    }

    atras = q->inicio;
    frente = q->inicio->prox;
    while (atras->dado != d && atras->prox != NULL)
    {
           atras = frente;
           frente = frente->prox;

    }
    if(atras->dado == d)
    {
        aux = atras;
        atras->ant->prox = frente;
        frente->ant = atras->ant;
        //q->inicio->prox = frente->ant;


        free(aux);
        return 1;
    }

   /* atras = q->inicio;
    frente = q->inicio->prox;

    while(atras->dado != d && atras->prox != NULL )
    {
        atras = frente;
        frente = frente->prox;
    }
    if(atras->dado == d)
    {
        aux = q->inicio;
        q->inicio->prox = frente;
        q->inicio = atras->ant;
        free(aux);
        return 1;

    }
    */




}
