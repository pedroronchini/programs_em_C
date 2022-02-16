/* Calcula a tabuada de 0 a 9*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", & numero);
    for (numero = 0; numero <= 10; numero++  )
    {
        printf(" 1 X %d = %d \n", numero, 1 * numero);
        printf(" 2 X %d = %d \n", numero, 2 * numero);
        printf(" 3 X %d = %d \n", numero, 3 * numero);
        printf(" 4 X %d = %d \n", numero, 4 * numero);
        printf(" 5 X %d = %d \n", numero, 5 * numero);
        printf(" 6 X %d = %d \n", numero, 6 * numero);
        printf(" 7 X %d = %d \n", numero, 7 * numero);
        printf(" 8 X %d = %d \n", numero, 8 * numero);
        printf(" 9 X %d = %d \n", numero, 9 * numero);
    }
    system("pause");
    return 0;
}
