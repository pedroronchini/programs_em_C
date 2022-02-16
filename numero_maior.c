/*Lista de exercicios 5 - Pratica 4*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n, maior = 0;
    do {
        printf("Digite quantos numeros quiser: ");
        scanf("%d", &n);
        if( n > maior){
                (maior = n);}
        }while (n != 0);{
    printf("o maior numero e %d", maior);}

    system("pause");
    return 0;

}
