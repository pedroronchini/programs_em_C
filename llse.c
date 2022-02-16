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

}listalinearse;

void criaLista(listalinearse *q);
int insereListaOrdenacao(listalinearse *q, int d);
void mostraLista(listalinearse q);
int buscaLista(listalinearse q, int d);
int removee(listalinearse *q, int d);

main ()
{
    listalinearse lista;
    int c, n;

    criaLista(&lista);

    printf("\nGerando numeros e inserindo na lista...\n\n");
    /*for (c = 0; c < 20; c++) {
        srand(clock());
        n = rand()%50;
        printf("%3d", n);
        /*
        Lista de apenas números pares
        if (n%2 == 0) Se quiser apenas numeros impar mude o '==' por '!='
        {
            insereListaOrdenacao(&lista, n);
        }
        
        insereListaOrdenacao(&lista, n);
        Sleep(100);
    }*/

    insereListaOrdenacao(&lista, 1);
    insereListaOrdenacao(&lista, 9);
    insereListaOrdenacao(&lista, 3);
    insereListaOrdenacao(&lista, 15);
    insereListaOrdenacao(&lista, 34);
    insereListaOrdenacao(&lista, 10);
    insereListaOrdenacao(&lista, 25);

    removee(&lista, 9);
    removee(&lista, 1);
    removee(&lista, 3);
    removee(&lista, 15);
    removee(&lista, 25);

    printf("\n\nApresentando a lista...\n\n");
    mostraLista(lista);
    printf("\n\n");

    
    printf("\n\nBuscando na lista...\n");
    n = buscaLista(lista, 11);
    if (n == 0) {
        printf("\nDado nao encontrado...\n\n");
    }
    else
    {
        printf("\nDado encontrado...\n\n");
    }

}

void criaLista(listalinearse *q)
{
    q->inicio = NULL;
}

int insereListaOrdenacao(listalinearse *q, int d)
{
    struct no *aux, *noAnterior, *noAtual;
    aux = (struct no*) malloc(sizeof(struct no));
    if (aux == NULL)
    {
        return 0;
    }

    // Lista vazia
    if (q->inicio == NULL)
    {
        aux->dado = d;
        aux->prox = NULL;
        q->inicio = aux;
        return 1;
    }
    
    // inserção no inicio
    if (d < q->inicio->dado) // decrescente: mudar o sinal para maior
    {
        aux->dado = d;
        aux->prox = q->inicio;
        q->inicio = aux;
        return 1;
    }

    // Localizar a posição de inserção na lista
    noAnterior = NULL;
    noAtual = q->inicio;
    while (noAtual != NULL && d > noAtual->dado)// decrescente: mudar o sinal para menor
    {
        noAnterior = noAtual;
        noAtual = noAtual->prox;
    }

    // inseção no meio da lista
    if (noAtual != NULL)
    {
        aux->dado = d;
        noAnterior->prox = aux;
        aux->prox = noAtual;
    }
    // inserçãp no final da lista
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
        while ( aux != NULL)
        {
            printf("%3d", aux->dado);
            aux = aux->prox;
        }
    }
}

int buscaLista(listalinearse q, int d)
{
    struct no *aux;
    aux = q.inicio;
    while (aux != NULL)
    {
        if (aux->dado == d)
        {
            return 1;
        }
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