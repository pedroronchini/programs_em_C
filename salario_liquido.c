/* Calcula o salario liquido de um professor */
#include <stdio.h>
void main()
{
    float hora, aulas,  salario, salario_liquido, valor_desconto;
    int desconto;
    printf("Digite o valor por hora: ");
    scanf("%f", &hora);
    printf("\nDigite o numero de aulas dadas no mes: ");
    scanf("%f", &aulas);
    printf("\nDigite o percentual dedesconto no IR: ");
    scanf("%d", &desconto);
    salario = hora * aulas;
    printf("\n O valor do salario bruto e:%2.f ", salario);
    valor_desconto = (salario *desconto)/100;
    printf("\n O valor do desconto e: %2.f", valor_desconto);
    salario_liquido = salario - valor_desconto;
    printf("\n O valor do salario liquido e: %2.f",salario_liquido );


}

