/*Reserva mesas numa casa de espetaculos*/
#include <stdio.h>
#define TAMANHO_MESA 30
#define LUGAR 5
int main()
{
    int codigo[TAMANHO_MESA],quantidade_lugar[LUGAR];
    int i;
    for(i = 0; i < TAMANHO_MESA; i++){
            printf("Entre com o codigo da mesa: " );
            scanf("%d", &codigo[i]);
            getchar();
            printf("Entre com a quantidade de lugares: ");
            scanf("%d", &quantidade_lugar[i]);
            getchar();
        }



    }

