/* Lista de Exercicios 5  e 6- Exercicio 5 e exercicio 3*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2, soma, conta;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    getchar();

    printf("Digite um outro numero: ");
    scanf("%d", &n2);
    getchar();

    for(conta = 1; conta <= n2; conta++){
        soma = soma + n1;
    }

    printf("\n\n resultado de %d * %d = %d\n", n1, n2, soma);

    system("pause");
    return 0;
}
