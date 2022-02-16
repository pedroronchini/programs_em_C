#include <stdio.h>
#include <stdlib.h>

struct no
{
    int dado; // offset 0 Bytes
    struct no *ligacao; // offset 2 Bytes
};

main()
{
    struct no *p1, *p2;

    // Runtime - Alocação Dinâmica de Memória

    p1 = (struct no*) malloc(sizeof(struct no));
    if (p1 == NULL)
    {
        printf("\nSem memoria...");
        getchar();
        exit(1);
    }

    p2 = (struct no*) malloc(sizeof(struct no));
    if (p2 == NULL)
    {
        printf("\nSem memoria...");
        getchar();
        exit(1);
    }

    p1->dado = 30;
    p2->dado = 50;
    p1->ligacao = p2;
    p2->ligacao = p1;

    printf("Endereco de p1 = %d\n", &p1);
    printf("Endereco de p2 = %d\n", &p2);

    printf("Endereco do bloco heap apontado por p1 = %d\n", p1);
    printf("Endereco do bloco heap apontado por p2 = %d\n\n", p2);

    printf("Endereco para onde ligacao de p1 aponta = %d\n\n", p1->ligacao);
    printf("Endereco para onde ligacao de p2 aponta = %d\n\n", p2->ligacao);

    printf("Dado = %d", p2->ligacao->ligacao->dado);
    //free(p2);
}
