/* Ordena três números inteiro*/
#include <stdio.h>
int main()
{
    int n1, n2, n3, ordem;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    printf("Digite um terceiro numero: ");
    scanf("%d", &n3);
    printf("Entre com a ordem(1-crescente, 2-decrescente): ");
    scanf("%d", &ordem);

    switch (ordem){
    case 1:
        if ((n1 < n2) && (n1 < n3)){
            if(n2 < n3)
                printf("%d,%d,%d", n1, n2, n3);
            else
                printf("%d,%d,%d", n1, n3, n2);
        }
        else if(n2 < n3){
            if(n1 < n3)
                printf("%d,%d,%d", n2, n1, n3);
            else
                printf("%d,%d,%d", n2, n3, n1);
        }
        else{
            if (n1 < n2)
                printf("%d,%d,%d", n3, n1, n2);
            else
                printf("%d,%d,%d", n3, n2, n1);
        }
        break;
    case 2:
        if((n1 > n2) && (n1 > n3) ){
            if(n2 > n3)
                printf("%d,%d,%d", n1, n2, n3);
            else
                printf("%d,%d,%d", n1, n3, n2);
        }
        else if(n2 > n3){
            if(n1 > n3)
                printf("%d,%d,%d", n2, n1, n3);
            else
                printf("%d,%d,%d", n2, n3, n1);
        }
        else{
            if (n1 > n2)
                printf("%d,%d,%d", n3, n1, n2);
            else
                printf("%d,%d,%d", n3, n2, n1);
        }
        break;
    }
    return 0;
}
