#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x, y;

    printf("\nEntre com um numero: ");
    scanf("%f", &a);
    printf("\nEntre com outro numero: ");
    scanf("%f", &b);
    printf("\nEntre com um outro numero: ");
    scanf("%f", &c);
    printf("\nDigite a variavel: ");
    scanf("%f", &x);

    y = (a * pow(x, 2) +  (b * x) + c);

    printf("\nO resultado e %f", y);

}
