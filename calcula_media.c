/* Calcula a media entre 15 números considerando
 * apenas aqueles que estão dentro de uma faixa
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int conta = 1, soma = 0, na_faixa = 0;
    int inferior,superior;
    int numero;

    printf("Entre com o limite inferior: ");
    scanf("%d", &inferior);
    printf("Entre com o limite superior: ");
    scanf("%d", &superior);
    getchar();

    if (superior > inferior){
        while (conta <= 15){
            printf("Entre com %d° numero: ", conta);
            scanf("%d", &numero);
            if((numero >= inferior) && (numero <= superior)){

                soma = soma + numero;
                na_faixa++; /* na_faixa= na_faixa+1 ou na_faixa+=1*/
            }
            conta++;
        }
        if(na_faixa > 0){
            printf("A media foi de %d!", soma / na_faixa);
        }
        printf("\nNumeros na faixa %d , numero fora da faixa %d", na_faixa,15 - na_faixa);
    }
    else{
            printf("\nO limite superior tem que ser maior do que o limite inferio!");
        }
    system("pause");
    return 0;
}
