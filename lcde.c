// Lista Circular Duplamente Encadeada
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct no
{
    struct no *ant;
    char dado[30];
    struct no *prox;

};

typedef struct
{
    struct no *inicio;
    struct no *fim;

} listacircularde;

void create(listacircularde *q);
int  insert(listacircularde *q, char d[30]);
void mostraInicioFim(listacircularde q);
void mostraFimInicio(listacircularde q);
int  busca(listacircularde q, char d[30]);
int  contaNos(listacircularde q);
int  removee(listacircularde *q, char d[30]);

main()
{    
    listacircularde L;
    
    create(&L);
    removee(&L,"Joaquim");
    
    insert(&L,"Maria");
    removee(&L,"Maria");

    insert(&L,"Maria");
    insert(&L,"Jose");
    insert(&L,"Jesus");
    insert(&L,"Francisco");
    insert(&L,"Paulo");
    insert(&L,"Beatriz");
    insert(&L,"Manuela");
    insert(&L,"Lourdes");
    removee(&L, "Maria");
    removee(&L,"Lourdes");
    removee(&L,"Paulo");
    removee(&L,"Manuela");
    
    mostraInicioFim(L);
    printf("\n\n");
    
    mostraFimInicio(L);
    if (busca(L,"Jesus") == 1)
    {
        printf("\n\nEncontrado...\n\n");
    }
    else
    {
        printf("\n\nNao encontrado...\n\n");
    }
    printf("Em nossa lista tem %d nomes\n\n", contaNos(L));

}

void create(listacircularde *q)
{
    q->inicio = NULL;
    q->fim = NULL;
}

int  insert(listacircularde *q, char d[30])
{
    struct no *aux;
    aux = (struct no*) malloc(sizeof(struct no));

    if (aux == NULL)
    {
        return 0;
    }

    strcpy(aux->dado,d);
    // primeiro no da lista    
    if (q->inicio == NULL)    
    {        
        q->inicio = aux;
        q->fim = aux;
        aux->ant = q->fim;
        aux->prox = q->inicio;
        return 1;
    }

    // inseri o no no final da lista
    else
    {
        aux->prox = q->inicio;
        aux->ant = q->fim;
        q->fim->prox = aux;
        q->fim = aux;
        q->inicio->ant = q->fim;
        return 1;
    }
}

void mostraInicioFim(listacircularde q)
{
    struct no *aux;

    if (q.inicio == NULL)
    {
        printf("\nLista vazia...\n\n");
    }
    else
    {
        aux = q.inicio;

        do
        {
            printf("%s ", aux->dado);
            aux = aux->prox;
        } while (aux != q.inicio);

        printf("\nDe volta ao inicio = %s", aux->dado);
    }
}

void mostraFimInicio(listacircularde q)
{
    struct no *aux;

    if (q.inicio == NULL)
    {
        printf("\nLista vazia...\n\n");
    }
    else
    {
        aux = q.fim;

        do
        {
            printf("%s ", aux->dado);
            aux = aux->ant;
        } while (aux != q.fim);

        printf("\nDe volta ao fim = %s", aux->dado);
    }
}

int busca(listacircularde q, char d[30])
{
    struct no *aux;

    if (q.inicio == NULL)
    {
        printf("\nLista vazia...\n\n");
        return 0;
    }

    aux = q.inicio;

    do
    {
        if (strcmp(aux->dado,d) == 0)
        {
            return 1;           
        }
        aux = aux->prox;
    } while (aux != q.inicio);

    return 0;
}

int  contaNos(listacircularde q)
{
    struct no *aux;
    int contador = 0;

    if (q.inicio == NULL)
    {
        return 0;
    }

    aux = q.inicio;

    do
    {
        contador++;
        aux = aux->prox;
    } while (aux != q.inicio);

    return contador;
}

int  removee(listacircularde *q, char d[30])
{
    struct no *aux, *atras, *atual;

    if (q->inicio == NULL)
    {
        printf("\nLista vazia! Remocao nao pode ser feita\n\n");
        return 0;
    }

    // Remoção do primeiro nó da lista
    if(strcmp(q->inicio->dado,d) == 0)
    {
        // Remoção do primeiro de uma lista com um único nó
        if (q->inicio == q->fim)
        {
            aux = q->inicio;
            q->inicio = NULL;
            q->fim = NULL;
            free(aux);
        }
        // Remoção do primeiro de uma lista com dois ou mais nós
        else
        {
            aux = q->inicio;
            q->inicio = q->inicio->prox;
            q->inicio->ant = q->fim;
            q->fim->prox = q->inicio;
            free(aux);
        }
        return 1;
    }
    // Remoção do último nó da lista
    if (strcmp(q->fim->dado,d) == 0)
    {
        aux = q->fim;
        q->fim = q->fim->ant;
        q->fim->prox = q->inicio;
        q->inicio->ant = q->fim;
        free(aux);
        return 1;
    }
    // Remoção de um nó do meio da lista
    atras = q->inicio;
    atual = q->inicio->prox;
    while (strcmp(atras->dado,d) != 0 && atual != q->inicio)
    {
        atras = atual;
        atual = atual->prox;
    }

    if (atual == q->inicio)
    {
        printf("Remocao nao pode ser feita! Dado nao encontrado");
        return 0;
    }
    else
    {
        aux = atras;
        atras->ant->prox = atual;
        atual->ant = atras->ant;
        free(aux);
        return 1;
    }
    
}