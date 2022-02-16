/* Lista de Exercicios 5 - exercicio 6*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cont = 1, alunos, nota;

    printf("Digite quantos alunos ha na sala:  ");
    scanf("%d", &alunos);
    getchar();



    while(cont <= alunos) {

    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);
    getchar();

    cont++;
    }
    if(nota < 6){
             printf(" %d alunos estao com nota abaixo de 6!", alunos );
        }
        else{
            printf("Nao ha alunos com nota menor que 6!");
        }

    system("pause");
    return 0;
}
