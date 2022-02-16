/*Cadastra e exibe pratos de um restaurante*/
#include <stdio.h>
#include <stdlib.h>
#define QTD_PRATOS 10
#define TAM_NOME_PRATO 50
typedef struct{
    int codigo;
    char nome[TAM_NOME_PRATO + 1];
    float preco;
}tp_prato;

int main(){

    tp_prato pratos[QTD_PRATOS];
    int i;

    for(i = 0; i < QTD_PRATOS; i++){

        printf("\nEntre com os dados do prato %d", i + 1);
        printf("\nEntre com o codigo: ");
        scanf("%d", &pratos[i].codigo);
        getchar();
        printf("\nEntre com o nome: ");
        fgets(pratos[i].nome, TAM_NOME_PRATO, stdin);
        printf("\nEntre com o preco: ");
        scanf("%f", &pratos[i].preco);
        getchar();

    }//for

    for( i = 0; i  < QTD_PRATOS; i++);{

        printf("\n %d %s %f",
               pratos[i].codigo,
               pratos[i].nome,
               pratos[i].preco);

    }//for

    return 0;

}//main
