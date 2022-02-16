/* Calcula a quantidade e o resto de madeira*/

#include <stdio.h>

int main()
{
    int tamanho_madeira;
    int tipo_madeira;
    int quantidade_madeira;
    int sobra_madeira;

    printf("Digite o tamanho da madeira em cm: ");
    scanf("%d/n", &tamanho_madeira);

    printf("Digite o tipo de maddeira: ");
    scanf("%d/n", &tipo_madeira);

    quantidade_madeira = tamanho_madeira/tipo_madeira;
    sobra_madeira = tamanho_madeira % tipo_madeira;

    printf("A quantidade de madeira e : %d e sobra: %d", quantidade_madeira, sobra_madeira);

    return 0;

}
