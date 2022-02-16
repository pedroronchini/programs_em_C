/* Calcula o peso ideal com base na altura de uma pessoa*/
#include <stdio.h>
int main()
{
    float altura, peso_ideal;
    char sexo;
    printf("Digite sua altura: ");
    scanf("%f/n", &altura);
    printf("Entre com (m) masculino ou (f) feminino: ");
    scanf("%c/n",&sexo);
    if (sexo== 'm')
        peso_ideal = (72.7 * altura) - 58;
    else
        peso_ideal = (62.1 * altura) - 44;
    printf("O seu peso ideal e: %2.f kg", peso_ideal);
    return 0;
}
