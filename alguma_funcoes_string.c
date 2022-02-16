/*Mostra algumas funções de string*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAMANHO 80
int main()
{
    char s1[TAMANHO +1], s2[TAMANHO +1];//s1[81], s2[81];

    printf("\nEntre com s1: ");
    fgets(s1, TAMANHO, stdin);//fgets(s1, 80, stdin);
    printf("\nEntre com s2: ");
    fgets(s2, TAMANHO, stdin);//fgets(s2, 80, stdin);
    printf("Tamanho de s1: %d", strlen(s1));
    printf("Tamanho de s2: %d", strlen(s2));

    if(strcmp(s1, s2)== 0){
        printf("\nS1 e igual a S2!");
    }//fecha if

    else if(strcmp(s1, s2) != 0){
        printf("\nS1 vem antes de S2!");
    }//fecha else if

    else{
        printf("\nS1 vem depois de S2!");
    }//fecha else

    system("pause");
    return 0;
}//facha a função main
