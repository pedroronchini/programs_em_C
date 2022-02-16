/* sistema mínimo para pedidos de matérias-primas para uma fábrica*/
/*Data: 1 de outubro de 2019*/
/*Pedro Henrique Ronchini*/
/* */
#include <stdio.h>

int main()
{
    int opcao, codigo1, codigo2, estoque, estoque_minimo, numero_pedido;
    int quantidade_entrada = 0, quantidade_pedido = 0, soma = 0, conta_pedido = 0, conta_entrada = 0;
    int total_maior = 0, quantidade_estoque_minimo = 0, pedidos_recusados = 0;
    float preco_unitario, preco_total,media;

    do
    {
        printf("Menu de Opcoes do Sistema: \n");
        printf("-----------------------------------------------------------------\n");
        printf("1-Cadastrar materia prima\n");
        printf("2-Efetuar pedidos de materia-prima\n");
        printf("3-Registrar entrada de materia prima no estoque\n");
        printf("4-Exibir informacoes da materia-prima\n");
        printf("5-Exibir informacoes estatisticas de movimentacao de pedido\n");
        printf("6-Exibir informacoes estatisticas de movimentacao de entradas\n");
        printf("7-Exibir menu de opcoes do sistema\n");
        printf("-----------------------------------------------------------------\n");
        scanf("%d", &opcao);
        getchar();

        switch(opcao)
        {
        case 1:
            printf("\nEntre com o codigo do produto: ");
            scanf("%d", &codigo1);
            getchar();

            printf("\nEntre com o preco unitario: ");
            scanf("%f", &preco_unitario);
            getchar();

            printf("\nEntre com o estoque do produto: ");
            scanf("%d", &estoque);
            getchar();

            printf("\nEntre com o estoque minimo do produto: ");
            scanf("%d", &estoque_minimo);
            getchar();

            printf("Material Registrado!\n");
            break;

        case 2:
            printf("Entre com o numero do pedido: ");
            scanf("%d", &numero_pedido);
            getchar();

            printf("Entre com a quantidade de pedido: ");
            scanf("%d", &quantidade_pedido);
            getchar();
            conta_pedido++;
            soma = soma + quantidade_pedido;

            if(estoque_minimo > estoque)
            {
                printf("Seu estoque atual esta menor que o estoque minimo!");
                quantidade_estoque_minimo++;
            }
            break;

        case 3:
            printf("Entre com o codigo: ");
            scanf("%d", &codigo2);
            getchar();

            while(codigo2 != codigo1)
            {

                if (codigo1 != codigo2 )
                {
                    printf("Codigo Invalido! Entre com o codigo cadastrado!\n");
                    pedidos_recusados++;
                }
            }
            if(estoque > estoque_minimo)
            {
                printf("Nao e necessario entra com a materia prima!\n");
            }
            else
            {
                printf("Entre com a quantidade de materia prima no estoque: \n");
                scanf("%d", &quantidade_entrada);
                getchar();
                conta_entrada++;
                estoque = estoque + quantidade_entrada;
            }
            break;
        case 4:
            if(codigo1 > 0)
            {
                printf("\nO codigo eh: %d", codigo1);
                printf("\nO preco eh: %.2f", preco_unitario);
                printf("\nO estoque eh: %d", estoque);
                printf("\nO estoque minimo eh: %d", estoque_minimo);
                printf("\nA quantidade de pedidos eh: %d",conta_pedido);
                printf("\nA quantidade de entradas eh: %d\n",quantidade_entrada);
            }
            else
            {
                printf("Nao ha produtos cadastrados no estoque!");
            }
            break;
        case 5:
            printf("A quantidade de entradas eh: %d\n",quantidade_entrada);
            printf("O preco total de pedidos eh: %.2f\n",preco_total = soma + preco_unitario);
            if(quantidade_pedido < total_maior)
            {
                printf("A quantidade menor de pedidos eh:%d\n",quantidade_pedido);
            }
            if(quantidade_pedido > total_maior)
            {
                printf("A quantidade maior de pedidos eh:%d\n",total_maior);
                quantidade_pedido = total_maior;
            }
            media = quantidade_pedido/numero_pedido;
            printf("A media da quantidade de pedidos eh: %2.f\n", media);
            printf("A quantidade de pedidos feitos quando o estoque era minimo eh: %d\n", quantidade_estoque_minimo);
            printf("A quantidade de pedidos recusados eh:%d\n", pedidos_recusados);
            break;
        case 6:
            printf("quantidade de entradas:\t\t\n%d\n", quantidade_entrada);
            printf("preco total das entradas:\t\t\n%.2f\n", preco_total);
            if(quantidade_pedido < total_maior)
            {
                printf("A quantidade menor de pedidos eh:\t\t\n%d\n",quantidade_pedido);
            }
            printf("media das quantidades das entradas:\t\t\n%.2f\n", media);
            printf("quantidade de entradas recursadas:\t\t\n%d\n", pedidos_recusados);
            break;
        default:
            printf("Menu de Opcoes do Sistema: \n");
            printf("-----------------------------------------------------------------\n");
            printf("1-Cadastrar materia prima\n");
            printf("2-Efetuar pedidos de materia-prima\n");
            printf("3-Registrar entrada de materia prima no estoque\n");
            printf("4-Exibir informacoes da materia-prima\n");
            printf("5-Exibir informacoes estatisticas de movimentacao de pedido\n");
            printf("6-Exibir informacoes estatisticas de movimentacao de entradas\n");
            printf("7-Exibir menu de opcoes do sistema\n");
            printf("-----------------------------------------------------------------\n");
            scanf("%d", &opcao);
            getchar();

        }
    }
    while(opcao != 7);

    getchar();
    return 0;
}
