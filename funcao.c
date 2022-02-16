/* Calcula uma equação quadratica */
#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, x1, delta, x2;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    if (a != 0)
    {
        delta = (b * b) - 4 * a * c;
        if (delta == 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            printf("Delta = 0 \n");
            printf("x1 e x2 = %f\n", x1);
        }
        else
        {
            if(delta > 0)
            {
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("Delta e maior que 0\n");
                printf(" x1 = %2.f ", x1);
                printf("x2 = %2.f \n", x2);
            }
            else
            {
                printf("Delta menor que 0\n");
                printf("nao existe raiz real");
            }

        }

    }

}





