/* Calculadora simples*/
#include <stdio.h>
int main()
{
    float n1, n2;
    char operacao;

    printf("Entre com um numero: ");
    scanf("%f", &n1);
    getchar();

    printf("Entre com outro numero: ");
    scanf("%f", &n2);
    getchar();

    printf("Entre com a operacao(+,-,*,:): ");
    scanf("%c", &operacao);
    getchar();

    switch(operacao)
    {
    case '+':
        printf("%f + %f = %.2f", n1,n2, n1 + n2);
        break;
    case '-':
        printf("%f - %f = %.2f", n1, n2, n1 - n2);
        break;
    case '*':
        printf("%f * %f = %.2f", n1, n2, n1 * n2);
        break;
    case ':' :
        if(n2 != 0)
            printf(" %f : %f = %.2f", n1, n2, n1 / n2);
        else
            printf("\n Erro de divisao por zero!");
        break;
    default:
        printf("\n Operacao Invalida!");
    }

    return 0;
}

