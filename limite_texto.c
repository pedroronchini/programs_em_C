/*Conta quantas vogais ha no texto*/
#include <stdio.h>
#include <string.h>
#define TAM_TEXTO 140

int main()
{
    char texto[TAM_TEXTO + 1];
    int conta_vogal = 0;
    int posicao;

    printf("Entre com o texto(maximo 140 caracteres): ");
    fgets(texto, TAM_TEXTO, stdin);

    for(posicao = 0; texto[posicao] != '\0'; posicao++ )
    {
        switch(tolower(texto [posicao]))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            conta_vogal++;
        }//fecha switch//

    }//for//
    printf("O texto tem %d vogais", conta_vogal);
}

