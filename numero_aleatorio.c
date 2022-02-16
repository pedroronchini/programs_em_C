/* Gera um numeroa aleatorio*/
#include <stdio.h>
#include <time.h>
void main()
{
    int palpite;
    int magico = rand() % 10 + 1;
    printf("Adivinhe o numero magico: ");
    scanf("%d", &palpite);
    if (palpite == magico){
        printf("Voce acertou! \n");
        printf("O numero magico e %d", magico);
    }
    else{
        printf("Errado!");
        if (palpite > magico){
            printf("Muito alto! \n");
        }
        else{
            printf("Muito baixo!");
        }
    }

}
