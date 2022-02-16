/*Lista exercico 5 pratica 2.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int candidato = 0, votos1, votos2, votos3;

    printf("Digite o numero do Candidato: ");
    scanf("%d", &candidato);
    getchar();

    if (candidato <= 3){
             printf("Entre com os votos de um dos candidatos: ");
    scanf("%d", &votos1);
    getchar();

    printf("Entre novamente com os votos de um dos candidatos: ");
    scanf("%d", &votos2);
    getchar();

    printf("Entre novamente com os votos de um dos candidatos: ");
    scanf("%d", &votos2);
    getchar();

       if ((votos1 < votos2) && (votos1 < votos3)){
            if(votos2 < votos3)
                printf("%d,%d,%d", votos1, votos2, votos3);
            else
                printf("%d,%d,%d", votos1, votos3, votos2);
        }
        else if(votos2 < votos3){
            if(votos1 < votos3)
                printf("%d,%d,%d", votos2, votos1, votos3);
            else
                printf("%d,%d,%d", votos2, votos3, votos1);
        }
        else{
            if (votos1 < votos2)
                printf("%d,%d,%d", votos3, votos1, votos2);
            else
                printf("%d,%d,%d", votos3, votos2, votos1);
        }
        }
    else{
        printf("Candidato Invalido!\n");
    }

    system("pause");
    return 0;
}
