#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct no
{
    struct no *esq;
    char dado[20];
    struct no *dir;
};

typedef struct no *arvore;

void insertNode(arvore *t, char d[20]);
void inOrdem(arvore t);
void preOrdem(arvore t);
void posOrdem(arvore t);
int  contaNos(arvore t);
int  procuraDado(arvore t, char d[20]);
int  altura(arvore t);

main()
{
    arvore T = NULL;

    insertNode(&T, "Clara");
    insertNode(&T, "Beatriz");
    insertNode(&T, "Olivia");
    insertNode(&T, "Flavia");
    insertNode(&T, "Gabriela");
    insertNode(&T, "Manuela");
    /*
    insertNode(&T, "Heloisa");
    insertNode(&T, "Ana");
    insertNode(&T, "Flavio");
    */

    printf("\nPre-Ordem\n");
    preOrdem(T);

    printf("\n\nIn-Ordem\n");
    inOrdem(T);

    printf("\n\nPos-Ordem\n");
    posOrdem(T);

    printf("\n\nTotal de Nos = %d\n", contaNos(T));
    printf("\nEncontrou = %d\n\n", procuraDado(T, "Olivia"));

    printf("\n\nAltura = %d\n", altura(T));
}

void insertNode(arvore *t, char d[20])
{
    if (*t == NULL)
    {
        *t = (struct no*) malloc(sizeof(struct no));
        if ( *t != NULL )
        {
            (*t)->esq = NULL;
            (*t)->dir = NULL;
            strcpy((*t)->dado, d);
        }
        else
            printf("Memoria insuficiente");
    }
    else
        if (strcmp(d,(*t)->dado) < 0)
            insertNode(&(*t)->esq, d);
        else
            if (strcmp(d, (*t)->dado) > 0)
                insertNode(&(*t)->dir, d);
            else
                printf("Duplicação de no");
}

void preOrdem(arvore t)
{
    if (t != NULL)
    {
        printf("%s ", t->dado);
        preOrdem(t->esq);
        preOrdem(t->dir);
    }
}

void inOrdem(arvore t)
{
    if (t != NULL)
    {
        inOrdem(t->esq);
        printf("%s ", t->dado);
        inOrdem(t->dir);
    }
}

void posOrdem(arvore t)
{
    if (t != NULL)
    {
        posOrdem(t->esq);
        posOrdem(t->dir);
        printf("%s ", t->dado);
    }
}

int contaNos(arvore t)
{
    if (t == NULL)
        return 0;
    return (contaNos(t->esq) +
            contaNos(t->dir) + 1);
}

int  procuraDado(arvore t, char d[20])
{
    if (t == NULL)
        return 0;
    return ((strcmp(t->dado, d) == 0) ||
             procuraDado(t->esq, d) ||
             procuraDado(t->dir, d));
}

int maior(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int  altura(arvore t)
{
    if (t == NULL)
        return -1;
    return 1 + maior(altura(t->esq), altura(t->dir));
}
