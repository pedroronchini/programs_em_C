#include <stdio.h>

double funcao_f (double x, double coef[], int n) {

    double y = (double)n * x;
}

int main () {
    double coef[5] = {2, 2.5, -3, 1.1, 5};
    double x = 2.5;
    double res;

    res = funcao_f(x, coef, 5);

    printf("O resultado eh %f", res);
}
