/*Escrever um progama na linguagem C que dado um vetor
* de notas lidas pelo teclado de uma turma de 15 alunos
* imprima a media das notas, a quantidade de notas acima
* da media e todas as notas acima dessa media
*/
#include <stdio.h>
#define TAMANHO 15
int main()
{
    float notas[TAMANHO], soma = 0, media;
    int i, conta_acima_media = 0;
    for(i = 0; i < TAMANHO; i++)
    {
        printf("\nEntre com a %do nota: ",i + 1);
        scanf("%f", &notas[i]);
        getchar();
        soma = soma + notas[i];
    }
    media = soma / TAMANHO;
    printf("\n A media das notas eh igual a %.2f", media);
    for(i = 0; i < TAMANHO; i++)
    {
        if(notas[i] > media)
        {
            printf("\nNota acima da media %.2f", notas[i]);
            conta_acima_media+=1;
        }
    }
    printf("\nQuantidade de notas acima da media: %d", conta_acima_media);

    /*for( i = 0; i < TAMANHO; i++){
        if (notas[i] > media){
            printf("\nNota acima da media %.2f", notas[i]);
        }
    }*/

    getchar();
    return 0;

}
