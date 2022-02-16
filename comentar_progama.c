#include <stdio.h>
// Informe o proposito do progama e comente as
// linhas de codigo
int main() {
    float vet[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;

    f = vet;

    printf("\ncontador/valor/valor/endereco/endereco\n");

    for(i = 0; i <= 4; i++) {

        // Mostra o valor de i
        printf("\ni = %d", i);

        // Mostra o valor que esta naquela posicao
        printf(" vet[%d] = %.1f", i, vet[i]);

        // Aponta para a posicao que o valor de i representa
        printf(" *(f + %d) = %.1f", i, *(f + i));

        // Mostra em hexadecimal o valor de i
        printf(" &vet[%d] = %x", i, &vet[i]);

        // Aponta para a posicao que o valor de i representa e mostra em hexadecimal
        printf(" (f + %d) = %x", i, f + 1);
    }
}
