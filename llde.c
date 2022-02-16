// Lista Linear Duplamente Encadeada
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

}listalinearde;

void create(listalinearde *q); // Por referencia
int insert(listalinearde *q, int d);
void mostraInicioFim(listalinearde q); // Por
void mostraFimInicio(listalinearde q);
int busca(listalinearde q, int d);
int removee(listalinearde *q, int d);

main()
{
    listalinearde L;

    create(&L); // Endereço fisico de L
    removee(&L, 20);

    insert(&L, 20);
    removee(&L, 20);

    insert(&L, 40);
    insert(&L, 30);
    insert(&L, 200);
    insert(&L, 400);
    insert(&L, 300);
    removee(&L, 40);

    mostraInicioFim(L);
    removee(&L, 500);
    printf("\n\n");
    mostraFimInicio(L);

    if(busca(L,30) == 1)
    {
        printf("\nEncontrado...\n\n");
    }else
    {
        printf("\nNao encontrado...\n\n");
    }




    //printf("\n%d", L.inicio->dado);

}

void create(listalinearde *q)
{

    q->inicio = NULL; // q apontado por inicio
    q->fim = NULL;

}

int insert(listalinearde *q, int d)
{

    struct no *aux;

    aux = (struct no*) malloc(sizeof(struct no));

    if (aux == NULL)
    {
        return 0;
    }

    aux->dado = d;

    // Primeiro nó da lista
    if(q->inicio == NULL)
    {
        aux->ant = NULL;
        aux->prox = NULL;
        q->inicio = aux;
        q->fim = aux;
        return 1;
    }

    // Inserção no final da lista
    else
    {
        aux->prox = NULL;
        aux->ant = q->fim;
        q->fim->prox = aux;
        q->fim = aux;
        return 1;
    }
}

void mostraInicioFim(listalinearde q)
{
    struct no *aux;

    if(q.inicio == NULL){
        printf("Lista vazia");
    }else
    {
        aux = q.inicio;
        while (aux != NULL)
        {
            printf("\n%d\n\n", aux->dado);
            aux = aux->prox;
        }

    }

}

void mostraFimInicio(listalinearde q)
{
    struct no *aux;

    if(q.inicio == NULL){
        printf("Lista vazia");
    }else
    {
        aux = q.fim;
        while (aux != NULL)
        {
            printf("\n%d\n\n", aux->dado);
            aux = aux->ant;
        }

    }
}

int busca(listalinearde q, int d)
{
    struct no *aux;

    if(q.inicio == NULL){
        return 0;

    }
    aux = q.inicio;
    while (aux != NULL)
    {
        if(aux->dado == d){
            return 1;
        }
        aux = aux->prox;
    }



}

int removee(listalinearde *q, int d)
{
    struct no *aux, *tras, *frente;
    // Lista vazia - não pode remover
    if(q->inicio == NULL)
    {
        printf("\nLista vazia...Remocao nao pode ser feita");
        return 0;
    }
    // Remover o primeiro nó da lista
    if (q->inicio->dado == d)
    {
        // Lista com um único no para ser removido
        if (q->inicio == q->fim)
        {
            printf("\n Removendo o primeiro no de lista com no unico...\n\n");
            aux = q->inicio;
            q->inicio = NULL;
            q->fim = NULL;
            free(aux);
        }
        // Remover o primeiro nó de uma lista que tem
        // dois ou mais nós
        else
        {
            printf("\n Removendo o primeiro no de lista com varios nos...\n\n");
            aux = q->inicio;
            q->inicio = q->inicio->prox;
            q->inicio->ant = NULL;
            free(aux);
        }
        return 1;
    }

    // Remover o último nó da lista
    if (q->fim->dado == d)
    {
        printf("\nRemovendo o ultimo no da lista...\n\n");
        aux = q->fim;
        q->fim = q->fim->ant;
        q->fim->prox = NULL;
        free(aux);
        return 1;
    }

    // Remover um nó no meio da lista
    tras = q->inicio;
    frente = q->inicio->prox;

    while (tras->dado != d && tras->prox != NULL)
    {
        tras = frente;
        frente = frente->prox;
    }
     if(tras->dado == d)
    {
        aux = tras;
        tras->ant->prox = frente;
        frente->ant = tras->ant;
        printf("\n\nO dado: %d foi removido", d);
        free(aux);
        return 1;
    }
    else
    {
        printf("Remocao nao pode ser feita! Dado nao encontrado");
        return 0;
    }


}
