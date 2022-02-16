/*cardápio de uma lancheria */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int codigo, quantidade;
    float valor1, valor2, valor3, valor4;
    while(codigo < 100 || codigo >105){
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Entre com a quantidade do produto: ");
    scanf("%d", &quantidade);
    getchar();
    valor1 = quantidade * 1.20;
    valor2 = quantidade * 1.30;
    valor3 = quantidade * 1.50;
    valor4 = quantidade * 1.00;

    switch(codigo){
    case 100:
        printf("O valor a ser pago e de: %.2f \n", valor1);
        break;
    case 101:
        printf("O valor a ser pago e de: %.2f \n", valor2);
        break;
    case 102:
        printf("O valor a ser pago e de: %.2f \n", valor3);
        break;
    case 103:
        printf("O valor a ser pago e de: %.2f \n", valor1);
        break;
    case 104:
        printf("O valor a ser pago e de: %.2f \n", valor2);
        break;
    case 105:
        printf("O valor a ser pago e de: %.2f \n", valor4);
        break;
    default:
        printf("Codigo Errado! \n");
    }
    }
    system("pause");
    return 0;
}
