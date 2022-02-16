/* Calculadora simples*/
#include <stdio.h>
int main()
{
    float n1, n2;
    char sinal;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);
    printf("Digite a operacao(+,-,*,:): ");
    scanf("%c", &sinal);
    fflush(stdin);
    switch(sinal)
    {
    case '+':
        printf("%f + %f = %f", n1, n2, n1 + n2);
        break;
    case '-':
        printf("%f - %f = %f", n1, n2, n1 - n2);
        break;
    case '*':
        printf("%f * %f = %f", n1, n2, n1 * n2);
        break;
    case ':':
            if(n2 != 0)
                printf("%f : %f = %f", n1, n2, n1 / n2);

            else
                printf("\n Erro de divisao por zero!");
                break;
        default:
        printf("\n Operacao invalida!");
    }
    return 0;
}
