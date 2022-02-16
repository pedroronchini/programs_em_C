/*aperece se o numero e par ou impar*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, resto;
    printf("Progama para identificar se um numero e par ou impar \n");
    printf("Digite um numero: ");
    scanf("%d", &n);
    getchar();
    resto = n % 2;
    if( n == 0){
        printf("numero neutro! \a\a\a");
    }
    if((resto ==0)&& (n !=0)){
        printf("O numero e par! \a\a");
    }
    if ( resto != 0){
        printf("O numero e impar!\a");
    }

    return 0;
}
