/* Calcula imposto */
#include <stdio.h>
void main()
{
    float valor;
    printf("Digite o valor a pagar: ");
    scanf("%f", &valor);
    if (valor <= 1200){
        printf("Insento");
    }
    else if (valor > 1200 && valor <=5000){
        printf("%.2f do valor de insento", (valor * 10) / 100);
    }
    else if(valor > 5000 && valor <10000){
        printf("%.2f insento", (valor * 15) / 100);
    }
    else{
        printf("%.2f do valor de insento", (valor * 20) / 100);
    }
}
