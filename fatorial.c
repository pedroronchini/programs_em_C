/* Lista de Exercicios 6 - exercicio 4*/
#include <stdio.h>
int main()
{
    int numero, conta, fatorial;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    getchar();

    for(conta = 1;conta <= numero  ; conta--){

    fatorial = fatorial - numero;

    }
    printf("%d! = %d", numero, numero * fatorial);

    return 0;

}
