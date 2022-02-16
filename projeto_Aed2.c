#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
struct quiz
{
    char nome_jogador[40];
    int idade_jogador;
    char perguntas[30];
    char resposta[30];
};

int main()
{
    struct quiz responde;
    int opcao;
    int dificuldade = -1;

    while(opcao != 3)
    {

        opcao = exibe_menu();
        system("cls");

        switch(opcao)
        {
        case 1:
            {
                printf("\nQUAL EH SEU NOME COMPLETO:");
                scanf("%40[^\n]s",responde.nome_jogador);
                getchar();
                printf("\nQUAL SUA IDADE:");
                scanf("%d",&responde.idade_jogador);
                getchar();
                system("cls");
                printf("\nCADASTRO REALIZADO COM SUCESSO.SELECIONE A OPCAO 2 PARA COMECARMOS O QUIZ.\n");


                break;
            }
        case 2:
        {
            if(responde.idade_jogador <= 0)
                {
                    printf("\nEH OBRIGATORIO SE CADASTRAR PARA JOGAR O QUIZ, VOLTE A OPCAO 1 E SE CADASTRE PARA JOGARMOS.\n");
                    break;
                }
                else
                {


                    printf("\nBEM VINDO AO NOSSO QUIZ %s,EH OBRIGATORIO A ESCOLHA DO NIVEL DE PERGUNTAS. VAMOS COMECAR ?\n",responde.nome_jogador);

            printf("\nESCOLHER PERGUNTAS COM NIVEL DE RACIOCINIO LOGICO FACIL, TECLE 0\n");
            printf("\nESCOLHER PERGUNTAS COM NIVEL DE RACIOCINIO LOGICO MEDIO, TECLE 1\n");
            printf("\nESCOLHER PERGUNTAS COM NIVEL DE RACIOCINIO LOGICO DIFICIL, TECLE 2\n");
            printf("\nENTRE COM O NIVEL DE DIFICULDADE DESEJADO :");
            scanf("%d",&dificuldade);
            getchar();
            system("cls");

            if(dificuldade == 0)
            {
                printf("\nSEU NIVEL DE DIFICULDADE FOI ESCOLHIDO COM SUCESSO.\n");
            }
            else if(dificuldade == 1)
            {
                printf("\nSEU NIVEL DE DIFICULDADE FOI ESCOLHIDO COM SUCESSO.\n");
            }
            else if(dificuldade == 2)
            {
                printf("\nSEU NIVEL DE DIFICULDADE FOI ESCOLHIDO COM SUCESSO.\n");
            }

            else
            {
                printf("\nSEU NIVEL DE DIFICULDADE NAO FOI CONCLUIDO COM SUCESSO, POR FAVOR ESCOLHA A OPCAO 2 NOVAMENTE.\n");
            }

            if(dificuldade < 0 || dificuldade >= 3)
            {
                printf("\nEH OBRIGATORIO ESCOLHER O NIVEL DE DIFICULDADE DO QUIZ.\n\n");
            }
            else
            {
                if(dificuldade == 0)
            {
                printf("\nfacil");
            }
            if(dificuldade == 1)
            {
                printf("\nmedio");
            }
            if(dificuldade == 2)
            {
                printf("\ndificil");
            }
            }

            break;
                }

        }


        case 3:
            printf("\nVOCE ESTA SAINDO DO JOGO QUIZ, PERGUNTAS E RESPOSTAS. VOLTE SEMPRE !\n");
            break;

        default:
            printf("\nOPCAO INVALIDA! ESCOLHA UMA DAS OCPCOES ABAIXO\n");
        }//SWITCH

    }//WHILE

    return 0;
}//MAIN
int exibe_menu( struct quiz responde[],int tamanho)

{
    int opcao;


    printf("\nBEM VINDO AO QUIZ DE PERGUNTAS E RESPOSTAS\n");
    printf("\nSELECIONE A OPCAO DESEJADA:\n");
    printf("\n1- INFORME-NOS SEU NOME E SUA IDADE PARA COMECARMOS O QUIZ *OBRIGATORIO*");
    printf("\n2- COMECAR O QUIZ");
    printf("\n3- SAIR DO QUIZ\n");
    printf("\nEntre com a opcao desejada:");
    scanf("%d",&opcao);
    getchar();

    return opcao;
}
