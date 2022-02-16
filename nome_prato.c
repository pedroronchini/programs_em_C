/*Mostra o nome do prato que teve maior valor de pedido*/
#include <stdio.h>
#include <string.h>

int main()
{
    char prato_maior[10];
    float total_maior, preco, total_pedido;
    int quantidade, opcao;

    strcpy(prato_maior, " ");
    total_maior = 0;

    do
    {
        printf("\n 1-Pizza");
        printf("\n 2-Hamburger");
        printf("\n 3-Sair");
        scanf("%d", &opcao);

        if(opcao != 3){
            printf("\nEntre com a quantidade: ");
            scanf("%d", &quantidade);
            printf("\nEntre com o preco: ");
            scanf("%f", &preco);
            total_pedido = quantidade * preco;

            switch(opcao){
        case 1:
            if(total_pedido > total_maior){
                strcpy(prato_maior, "Pizza");
                total_maior = total_pedido;
            }//fecha if
            break;
        case 2:
            if(total_pedido >total_maior){
                strcpy(prato_maior, "Hamburger");
                total_maior = total_pedido;
            }//fecha if
            break;
        default:
            printf("\nPrato Invalido!");
            }//fecha switch
        }//fecha if
    }while(opcao != 3);//fecha do while

    printf("Prato com maior pedido %s\n", prato_maior);
    printf("Total de pedido %.2f", total_maior);

    return 0;
}// fecha main
