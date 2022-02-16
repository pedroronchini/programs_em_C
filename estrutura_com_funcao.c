/*main.c */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(){

    tp_prato pratos_cardapio[QTD_MAX_PRATOS];
    int quantidade_pratos = 0;
    int opcao;

    do{
        printf("\n 1-Inclui pratos\n 2-Exibe pratos\n 3-Sair");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            if(quantidade_pratos < QTD_MAX_PRATOS){
                quantidade_pratos = inclui_pratos(pratos_cardapio, quantidade_pratos);
            }
            else{
                printf("\nNao e possivel cadastrar mais pratos!!");
            }
            break;
        case 2:
            exibe_pratos(pratos_cardapio, quantidade_pratos);
            break;
        default:
            printf("Opcao Invalida!!");
        }//switch
    }while(opcao != 3);
    return 0;

}//main
