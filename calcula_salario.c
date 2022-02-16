/*calcule o pagamento semanal de cada empregado.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int codigo, horario, itens;
    float salario,vendas;
    while(codigo < 1 || codigo > 4){
    printf("Entre com seu codigo: ");
    scanf("%d", &codigo);
    printf("Entre com seu salario: ");
    scanf("%2.ff", &salario);
    getchar();
    switch (codigo){
    case 1:
        printf("Seu salario e de %f \n", salario);
        break;
    case 2:
        printf("Entre com o horario de trabalho extra: ");
        scanf("%d", &horario);
        printf("Seu salario e de %.2f \n",(salario * 1.5) / horario);
        break;
    case 3:
        printf("Entre com numero de vendas feitas: ");
        scanf("%d", &vendas);
        printf("Seu salario e de %.2f \n", 250 +(0.057 * vendas));
        break;
    case 4:
        printf("Entre com o numero de itens produzidos: ");
        scanf("%d", &itens);
        printf("Seu salario e de %.2f \n", salario );
        break;
    default:
        printf("Codigo invalido!");

    }
    }
    system("pause");
    return 0;
}
