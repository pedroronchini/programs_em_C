/* Calcula o valor gasto em banho de uma familia*/

#include<stdio.h>
int main()
{
    int numero_pessoas;
    float tempo_pessoa;
    float custo;

    printf("Quantas pessoas ha na casa:  ");
    scanf("/n%d", &numero_pessoas);

    printf("Quantidade de tempo gasto no chuveiro:  ");
    scanf("/n%f", &tempo_pessoa);

    custo =( 5400 * tempo_pessoa * numero_pessoas) /  0,33741;

    printf("O custo no final do mes e de: %2.f/n", custo );

    return 0;
}
