/*Escrever um progama na linguagem C que dado um vetor
* de notas lidas pelo teclado de uma turma de 15 alunos
* mostre a quantidade de vezes que nota(lida pelo teclado)
* aparece no vetor notas.Mostre as posições nas quais a nota
* foi digitada
*/
#include <stdio.h>
#define TAMANHO 15
int main()
{
    float notas[TAMANHO], soma = 0;
    int i;
    for(i = 0; i < TAMANHO; i++)
    {
        printf("\nEntre com a %do nota: ",i + 1);
        scanf("%f", &notas[i]);
        getchar();
        soma = soma + notas[i];
    }

    getchar();
    return 0;
}
