/*Calcular a m´edia de idade de uma turma de alunos*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int conta = 1, soma = 0, media = 0;
    int idade;
    while (conta <= 20){
            printf("Entre com a %do idade: ",conta);
            scanf("%d", &idade);
            soma = soma + idade;
            conta++;
    }
    printf(" A media  e de : %d", soma / conta);

    system("pause");
    return 0;
}
