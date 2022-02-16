/* Le a nota final da disciplina*/
#include <stdio.h>
void main()
{
    float nota;
    printf("Digite com a nota do aluno: ");
    scanf("%f", &nota);
    if ((nota < 0) || (nota > 10)){
        printf("\n Nota invalida!");
    }
    else{
            if ( nota >= 6 && nota <=10){
        printf("Voce foi aprovado!");
    }
    else if (nota > 4 && nota < 5.9){
        printf("Voce ficou de segunda epoca!");
    }
    else{
        printf("Voce foi reprovado!");
    }
    }
}
