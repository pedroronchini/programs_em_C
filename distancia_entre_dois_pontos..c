/* Calcula a distancia entre dois pontos */
#include <stdio.h>
#include <math.h>
void main()
{
    int xp, yp, xq, yq;
    float distancia;
    distancia = sqrt(pow(xp - xp, 2) + pow(xq - yq,2));
    printf("Digite o valor de xp: ");
    scanf("%d", &xp);
    printf("Digite o valor de yp: ");
    scanf("%d", &yp);
    printf("Digite o valor de xq: ");
    scanf("%d", &xq);
    printf("Digite o valor de yq: ");
    scanf("%d", &yq);
    printf("\n A distancia entre os dois pontos e de:%.2f ", distancia);
}
