/*Exercicio 5 da lista de exercicio 4*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int candidato;
    float votos1, votos2, votos3;

    printf("Digite o numero do  candidato: ");
    scanf("%d", &candidato);
    getchar();
    printf("Entre com a quantidade de votos de um dos candidatos: ");
    scanf("%f", &votos1);
    getchar();
    printf("Entre com a quantidade de votos de outro dos candidatos: ");
    scanf("%f", &votos2);
    getchar();
    printf("Entre com a quantidade de votos de outro dos candidatos: ");
    scanf("%f", &votos3);
    getchar();
    switch (candidato){
    case 1:
         if ((votos1 < votos2) && (votos1 < votos3)){
            printf(" O vencedor foi o %d \n", candidato);
        }
        break;
    case 2:
        if ((votos2 < votos1) && (votos2 < votos3)){
            printf(" O vencedor foi o %d \n", candidato);
        }
        break;
    case 3:
        if ((votos3 < votos2) && (votos3 < votos1)){
            printf(" O vencedor foi o %d \n", candidato);
        }
    default:
        printf("Candidato invalido! \n");
    }
    system("pause");
    return 0;
}
