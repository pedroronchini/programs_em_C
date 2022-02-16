#include <stdio.h>

int main()
{
    int i = 0, *ptr;
    int vet[] = {4, 9, 12};

    ptr = vet;
    // ptr = &vet[2];
    for(i = 0; i < 3; i++) {
        //printf("%d ", *ptr++);
        printf("%d ", (*ptr)++);
    }

    printf("\n");
    printf("--> %d\n", vet[0]);
    return(0);
}
