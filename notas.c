/* Calcula a nota media dos alunos*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
     float nota1, nota2, nota3, nota4, media;

     printf("Digite a primeira nota: ");
     scanf("%f/n", &nota1);

     printf("Digite a segunda nota: ");
     scanf("%f/n", &nota2);

     printf("Digite a terceira nota: ");
     scanf("%f/n", &nota3);

     printf("Digite a quarta nota: ");
     scanf("%f/n", &nota4);

     media = (nota1 + nota2*2 + nota3*3 + nota4*4)/10;

     printf("A media do aluno e: %1.f", media);

     return 0;
     system("pause");
}
