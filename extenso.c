/* Escreve por extenso*/
#include <stdio.h>
int main()
{
    int numero;
    printf("Entre com um numero de 0 a 10: ");
    scanf("%d", &numero);
    switch (numero){
        case 0 : printf("\n zero"); break;
        case 1 : printf("\n um"); break;
        case 2 : printf("\n dois"); break;
        case 3 : printf("\n tres"); break;
        case 4 : printf("\n quatro"); break;
        case 5 : printf("\n cinco"); break;
        case 6 : printf("\n seis"); break;
        case 7 : printf("\n sete"); break;
        case 8 : printf("\n oito"); break;
        case 9 : printf("\n nove"); break;
        case 10 : printf("\n dez"); break;
        default:
            printf("numero fora da faixa");
    }
    return 0;
}
