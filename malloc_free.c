#include <stdio.h>
#include <stdlib.h>

struct no {
    int dado; // offset 0 Bytes
    struct no *ligacao; // offset 2 Bytes
};

main() {
    struct no *p1, *p2;

    //Runtime- Alocação Dinânmica de Memória

    p1 = (struct no*) malloc(sizeof(struct no));
    if (p1 == NULL){
        printf("\nSem memoria...");
        getchar();
        exit(1);
    }

    p2 = (struct no*) malloc(sizeof(struct no));
    if (p2 == NULL){
        printf("\nSem memoria...");
        getchar();
        exit(1);
    }

    p1->dado = 30;
    p2->dado = 50;
    p1->ligacao = p2;
    p2->ligacao = NULL;

    printf("Endereco de p1 = %d\n", &p1);
    printf("Endereco de p1 = %d\n", &p2);

    printf("Endereço do bloco de heap apontado por p1 = %d\n", p1);
    printf("Endereço do bloco de heap apontado por p1 = %d\n\n", p2);

    printf("Endereço do bloco de heap apontado por p1 = %d\n\n", p2);
}
