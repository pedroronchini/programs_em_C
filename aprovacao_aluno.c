/* Calcula a nota do aluno */
#include <stdio.h>
void main()
{
    float nota1, nota2, nota_total;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    nota_total = nota1 + nota2;
    if( nota_total > 6){
        printf("Voce foi aprovado");
    }
    else{
        printf("Voce nao foi aprovado, pois sua nota foi abaixo da media");
    }
}
