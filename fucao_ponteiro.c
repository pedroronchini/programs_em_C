#include <stdio.h>
/*
    Exemplo de fucao que retorna ponteiro.
    A funcao retorna o ponteiro pnome
*/
/*Escreva corretamente o prototipo da funcao*/
char *acheSobrenome(char nome);

int main()
{

    char nomeCompleto[150];
    char *p;

    /*
        Substitui as foncoes puts() e gets()
        com as respectivas funcoes de entrada/saida
    */
    printf("\nInforme seu nome completo: ");
    scanf("%c", &nomeCompleto);

    p = acheSobrenome(nomeCompleto);
    printf("%c", p);

    return(0);
}

char *acheSobrenome(char nome)
{
    char *pnome;
    int i = 0;

    while(nome[i] != ' ')
    {
        i++;
    }
    i++;
    pnome = &nome[i];
    return (pnome);
}
