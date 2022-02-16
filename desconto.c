/* Calcula desconto*/

#include <stdio.h>

int main()
{
    float preco_produto;
    int desconto;
    float preco_final;

    printf("digite o valor do produto: ");
    scanf("%f/n", &preco_produto);

    printf("Digite a porcentagem de desconto: ");
    scanf("%d/n", &desconto);

    preco_final = preco_produto - (preco_produto * desconto/100);

    printf("Novo valor : %2.f ", preco_final);

    return 0;
}
