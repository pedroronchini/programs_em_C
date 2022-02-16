/*Exercicio 01*/
#include <stdio.h>
int main()
{
    char plano;
    float salario;
    printf("Digite seu plano: ");
    scanf("%c", &plano);
    printf("Digite seu salario: ");
    scanf("%.2f", &salario);
    switch(plano){
        case 'A':
        printf("\n Seu novo salario e de: %f", salario * 0.10);
        break;
        case 'B':
        printf("\n Seu novo salario e de: %f",salario * 0.15);
        break;
        case 'C':
        printf("\n Seu novo salario e de: %f",salario * 0.20);
        break;
        default:
            printf("Plano Invalido");

    }
}
