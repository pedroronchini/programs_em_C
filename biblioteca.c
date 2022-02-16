/*funçoes para o arquivo estrutura_com_funcao.c*/

#include "biblioteca.h"
#include <stdio.h>

int procura_prato(tp_prato pratos[], int tamanho, int codigo){

    int posicao = NAO_EXISTE, i;

    for(i = 0; i < tamanho; i++){
        if(pratos[i].codigo == codigo){
            posicao = i;
            break;//termina o laço for
        }
    }

    return posicao;
}
int inclui_pratos(tp_prato pratos[], int tamanho){

    int codigo;

    printf("\nEntre com as informacoes do prato: ");
    printf("\nEntre com o codigo: ");
    scanf("%d", &codigo);
    getchar();

    if(procura_prato(pratos, tamanho, codigo) == NAO_EXISTE){
        pratos[tamanho].codigo = codigo;
        printf("\nEntre com o nome do prato: ");
        fgets(pratos[tamanho].nome, TAM_MAX_NOME, stdin);
        printf("\nEntre com o preco do prato: ");
        scanf("%f", &pratos[tamanho].preco);
        tamanho = tamanho + 1;
    }

    else{
        printf("\nPrato com codigo %d ja exite!", codigo);
    }
    return tamanho;
}

void exibe_pratos(tp_prato pratos[], int tamanho){
    int i;
    printf("\nPratos  cadastrados no restaurante: ");
    printf("\nCodigo\t Nome\t Preco");
    for(i = 0; i < tamanho; i++){
        printf("\n%d\t %s\t %f",
               pratos[i].codigo,
               pratos[i].nome,
               pratos[i].preco);
    }
    return;
}
