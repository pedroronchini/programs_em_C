/*Mostra o resultado da avaliacao do polinomio*/
#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, x, resultado;
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    resultado = (a * pow(x, 2)) + (b * x) + c;
    printf("O resultado e: %.2f", resultado);
}
