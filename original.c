#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>
#include <graphics.h>
#include <unistd.h>
#define TRUE	1
#define FALSE	0


struct quiz
{
    char nome_jogador[40];
    int idade_jogador;
    char pergunta;

};
struct no
{
    char perguntas[300];
    struct no *prox;
};

typedef struct
{
    struct no *inicio;
    struct no *fim;
} fila;

void create(fila *q);
int  isEmpty(fila q);
int  insert(fila *q, char d[]);
int  removee(fila *, char *);
int exibe_menu();
void mostraFila(fila q);

int main()
{
    struct quiz responde;
    int opcao;
    int dificuldade = -1;
    int c=0;
    fila f;
    char n[300] = {};
    int contador=0;
    int verificador = 0;

    create(&f);

    while(opcao != 3)
    {

        opcao = exibe_menu();
        system("cls");

        switch(opcao)
        {
        case 1:
        {
            if(verificador >= 1)
            {
                printf("\n%s VOCE JA ESTA CADASTRADO, SELECIONE A OPCAO 2 E ESCOLHA SEU NIVEL DE DIFICULDADE NOVAMENTE.\n",responde.nome_jogador);
                    break;
            }
            printf("\nQUAL EH SEU NOME COMPLETO(TECLE ENTER APOS INSERIR O NOME):");
            scanf("%40[^\n]s",responde.nome_jogador);
            getchar();
            printf("\nQUAL SUA IDADE(TECLE ENTER APOS INSERIR A IDADE):");
            scanf("%d",&responde.idade_jogador);
            getchar();
            system("cls");
            printf("\nCADASTRO REALIZADO COM SUCESSO.SELECIONE A OPCAO 2 PARA COMECARMOS O QUIZ.\n");
            verificador++;



            break;
        }
        case 2:
        {

            if(verificador == 0)
            {
                printf("\nEH OBRIGATORIO SE CADASTRAR PARA JOGAR O QUIZ, VOLTE A OPCAO 1 E SE CADASTRE PARA JOGARMOS.\n");
                break;
            }

            char a[]="\n1-O QUE VOCE COLOCA EM UMA TORRADEIRA ?\n A)TORRADA\n B)PAO\n C)FRANGO\n D)OVO\n";
            char b[]="2-QUANTAS CASAS DECIMAIS TEM O NUMERO PI ? \n A)Duas\n B)Centenas\n C) Trilhares \n D)Vinte\n";
            char z[]="3-O QUE A PALAVRA LEGEND SIGNIFICA EM PORTUGUES ?\n A) Legenda\n B) Conto\n C) Historia\n D) Lenda \n";
            char d[]="4-QUAL O NUMERO MINIMO DE JOGADORES EM UMA PARTIDA DE FUTEBOL ?\n A) 8\n B) 10\n C) 9\n D) 7\n";
            char y[]= "5-QUAL A NACIONALIDADE DE CHE GUEVARA ?\nA)Cubana\nB)Peruana\nC)Panamenha\nD)Argentina\n";
            char g[]="6-QUEM FOI O PRIMEIRO HOMEM A PISAR NA LUA ?\nA)Yuri Gagarin\nB)Buzz Aldrin\nC)Charles Conrad\nD)Neils.A\n";
            char h[]="\n1- DE QUEM E A FAMOSA FRASE :PENSO, LOGO EXISTO ? \n\nA)Platao\nB)Galileu Galilei\nC)Descartes\nD)Socrates\n";
            char w[]="2-DE ONDE E A INVENCAO DO CHUVEIRO ELETRICO ?\n\nA)Franca\nB)Inglaterra\nC)Brasil\nD)Australia\n";
            char j[]="3-QUAL O LIVRO MAIS VENDIDO NO MUNDO DEPOIS DA BIBLIA ?\n\nA)O Senhor dos Aneis\nB)Dom Quixote \nC)O Pequeno Principe\nD)Ela, a Feiticeira\n";
            char k[]="4-QUAIS AS DUAS DATAS QUE SAO COMEMORADAS EM NOVEMBRO ?\n\nA)Independencia do Brasil e Dia da Bandeira\nB)Proclamacao da Republica e Dia Nacional da Consciencia Negra\nC)Dia do Medico e Dia de São Lucas\nD)Dia de Finados e Dia Nacional do Livro\n";
            char l[]= "5-QUAL A ALTURA DA REDE DE VOLEI NOS JOGOS ?\n\nA) 2,4 para ambos\nB) 2,5 m e 2,0 m\nC) 1,8 m e 1,5 m\nD) 2,43 m e 2,24 m \n";
            char m[]="6-QUAL PERSONAGEM FOLCLORICO COSTUMA SER AGRADADO PELOS CACADORES COM A OFERTA DE FUMO ?\n\nA) Caipora\nB) Saci\nC) Lobisomemn\nD) Boitata\n";
            char o[]="\n1-QUAIS O MENOR E O MAIOR PAIS DO MUNDO ?\nA)Vaticano e Russia\nB)Nauru e China\nC)Monaco e Canada\nD)Malta e Estados Unidos\n";
            char p[]="2-QUAL O NOME DO PRESIDENTE DO BRASIL QUE FICOU CONHECIDO COMO JANGO ?\nA)Janio Quadros\nB)Jacinto Anjos\nC)Getulio Vargas\nD)Joao Goulart \n";
            char q[]="3-ATUALMENTE, QUANTOS ELEMENTOS QUIMICOS A TABELA PERIODICA POSSUI ?\nA)113\nB)109\nC)108\nD)118 \n";
            char r[]="4-QUAIS OS PAISES QUE TEM A MAIOR E MENOR EXPECTATIVA DE VIDA DO MUNDO ?\nA)Japao e Serra Leoa \nB)Australia e Afeganistao\nC)Italia e Chade\nD)Brasil e Congo\n";
            char s[]="5-QUANTO TEMPO A LUZ DO SOL DEMORA A CHEGAR A TERRA ?\nA)12 minutos\nB)1 dia\nC)12 horas\nD)8 minutos*\n";
            char t[]="6-EM QUE ORDEM SURGIRAM OS MODELOS ATOMICOS ?\nA)Thomson, Dalton, Rutherford, Rutherford-Bohr\nB)Rutherford-Bohr, Rutherford, Thomson, Dalton\nC)Dalton, Rutherford-Bohr, Thomson, Rutherford\nD)Dalton, Thomson, Rutherford, Rutherford-Bohr\n";

            printf("\nBEM VINDO AO NOSSO QUIZ %s,EH OBRIGATORIO A ESCOLHA DO NIVEL DE PERGUNTAS. VAMOS COMECAR ?\n",responde.nome_jogador);

            printf("\n0- ESCOLHER PERGUNTAS COM NIVEL DE RACIOCINIO LOGICO FACIL, TECLE 0 E ENTER\n");
            printf("\n1- ESCOLHER PERGUNTAS COM NIVEL DE RACIOCINIO LOGICO MEDIO, TECLE 1 E ENTER\n");
            printf("\n2- ESCOLHER PERGUNTAS COM NIVEL DE RACIOCINIO LOGICO DIFICIL, TECLE 2 E ENTER\n");
            printf("\nENTRE COM O NIVEL DE DIFICULDADE DESEJADO :");
            scanf("%d",&dificuldade);
            getchar();
            system("cls");

            if(dificuldade == 0)
            {
                printf("\nSEU NIVEL DE DIFICULDADE FOI ESCOLHIDO COM SUCESSO.\n");
                Sleep(3000);
            }
            else if(dificuldade == 1)
            {
                printf("\nSEU NIVEL DE DIFICULDADE FOI ESCOLHIDO COM SUCESSO.\n");
                Sleep(3000);
            }
            else if(dificuldade == 2)
            {
                printf("\nSEU NIVEL DE DIFICULDADE FOI ESCOLHIDO COM SUCESSO.\n");
                Sleep(3000);
            }

            else
            {
                printf("\nSEU NIVEL DE DIFICULDADE NAO FOI CONCLUIDO COM SUCESSO, POR FAVOR ESCOLHA A OPCAO 2 NOVAMENTE.\n");
                Sleep(3000);
                system("cls");
            }

            if(dificuldade < 0 || dificuldade >= 3)
            {
                printf("\nEH OBRIGATORIO ESCOLHER O NIVEL DE DIFICULDADE DO QUIZ.\n\n");
                Sleep(3000);
                system("cls");
            }
            else
            {
                if(dificuldade == 0)
                {



                    insert(&f,a);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(3000);

                    }
                    if(responde.pergunta == 'A')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        Sleep(1500);
                        contador++;
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");

                    insert(&f,b);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(3000);
                    }
                    if(responde.pergunta == 'C')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");



                    insert(&f,z);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(3000);
                    }



                    if(responde.pergunta == 'D')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }



                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");

                    insert(&f,d);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(3000);
                    }
                    if(responde.pergunta == 'D')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");

                    insert(&f,y);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(3000);
                    }
                    if(responde.pergunta == 'D')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }

                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");


                    insert(&f,g);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(3000);
                    }
                    if(responde.pergunta == 'D')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }

                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");
                    if(contador >= 4)
                    {
                        printf("\nPARABENS %s ! VOCE ACERTOU %d DE 6 QUESTOES. ESTE NIVEL VOCE JA DOMINOU, QUE TAL ARRISCAR UM NIVEL MAIS DIFICIL. TOPA ?\n",responde.nome_jogador,contador);
                        Sleep(5000);
                        contador = 0;
                        system("cls");
                    }
                    else
                    {
                        printf("\n%s VOCE NAO FOI TAO BEM, ACERTOU %d DE 6 QUESTOES, QUE TAL TENTAR NOVAMENTE E SE SUPERAR. TOPA ?\n",responde.nome_jogador,contador);
                        Sleep(5000);
                        contador = 0;
                        system("cls");
                    }

                }
                system("cls");

                if(dificuldade == 1)
                {


                    system("cls");
                    insert(&f,h);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(3000);
                    }

                    if(responde.pergunta == 'C')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        Sleep(1500);
                        contador++;

                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");

                    insert(&f,w);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(3000);
                    }
                    if(responde.pergunta == 'C')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");




                    insert(&f,j);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(3000);
                    }
                    if(responde.pergunta == 'B')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");


                    insert(&f,k);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(3000);
                    }
                    if(responde.pergunta == 'B')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");


                    insert(&f,l);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(4000);
                    }
                    if(responde.pergunta == 'D')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");

                    insert(&f,m);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(3000);
                    }
                    if(responde.pergunta == 'A')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }


                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");
                    if(contador >= 4)
                    {
                        printf("\nPARABENS %s ! VOCE ACERTOU %d DE 6 QUESTOES. ESTE NIVEL VOCE JA DOMINOU, QUE TAL ARRISCAR UM NIVEL MAIS DIFICIL. TOPA ?\n",responde.nome_jogador,contador);
                        contador = 0;
                        Sleep(5000);
                        system("cls");
                    }
                    else
                    {
                        printf("\n%s VOCE NAO FOI TAO BEM, ACERTOU %d DE 6 QUESTOES, QUE TAL TENTAR NOVAMENTE E SE SUPERAR. TOPA ?\n",responde.nome_jogador,contador);
                        Sleep(5000);
                        contador = 0;
                        system("cls");
                    }

                }




                if(dificuldade == 2)

                {


                    system("cls");
                    insert(&f,o);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(3000);

                    }

                    if(responde.pergunta == 'A')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        Sleep(1500);
                        contador++;

                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");

                    insert(&f,p);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(4000);
                    }
                    if(responde.pergunta == 'D')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");




                    insert(&f,q);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(3000);
                    }
                    if(responde.pergunta == 'D')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");


                    insert(&f,r);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(4000);
                    }
                    if(responde.pergunta == 'A')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");


                    insert(&f,s);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(4000);
                    }
                    if(responde.pergunta == 'D')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }
                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");

                    insert(&f,t);
                    mostraFila(f);
                    printf("\nENTRE COM A SUA ALTERNATIVA DESEJADA:");
                    scanf("%c",&responde.pergunta);
                    getchar();
                    responde.pergunta = toupper(responde.pergunta);
                    if(responde.pergunta !='A' && responde.pergunta != 'B' && responde.pergunta != 'C' && responde.pergunta != 'D')
                    {
                        printf("\nALTERNATIVA INEXISTENTE. QUESTAO COMPUTADA COMO ERRADA\n");
                        Sleep(4000);
                    }
                    if(responde.pergunta == 'D')
                    {
                        printf("\nA ALTERNATIVA ESTA CORRETA");
                        contador++;
                        Sleep(1500);
                    }

                    else
                    {
                        printf("\nA ALTERNATIVA ESTA INCORRETA");
                        Sleep(1500);
                    }


                    if(!isEmpty(f))
                    {
                        removee(&f, n);
                    }
                    system("cls");
                    if(contador >= 4)
                    {
                        printf("\nPARABENS %s ! VOCE ACERTOU %d DE 6 QUESTOES. ESTE NIVEL VOCE JA DOMINOU.\n",responde.nome_jogador,contador);
                        contador = 0;
                        Sleep(5000);
                        system("cls");
                    }
                    else
                    {
                        printf("\n%s VOCE NAO FOI TAO BEM, ACERTOU %d DE 6 QUESTOES, QUE TAL TENTAR NOVAMENTE E SE SUPERAR. TOPA ?\n",responde.nome_jogador,contador);
                        Sleep(5000);
                        contador = 0;
                        system("cls");
                    }

                }




            }

            break;


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
int exibe_menu(struct quiz responde[],int tamanho)

{
    int opcao;


    printf("\nBEM VINDO AO QUIZ DE PERGUNTAS E RESPOSTAS\n");
    printf("\nSELECIONE A OPCAO DESEJADA:\n");
    printf("\n1- INFORME-NOS SEU NOME E SUA IDADE PARA COMECARMOS O QUIZ *OBRIGATORIO*(TECLE 1 E ENTER) ");
    printf("\n2- RESPONDER O QUIZ(TECLE 2 E ENTER)");
    printf("\n3- SAIR DO QUIZ(TECLE 3 E ENTER)\n");
    printf("\nEntre com a opcao desejada:");
    scanf("%d",&opcao);
    getchar();

    return opcao;
}
void create(fila *q)
{
    q->inicio=NULL;
    q->fim=NULL;
}
int insert (fila *q, char d[])
{


    struct no *aux;
    aux=(struct no*)malloc(sizeof(struct no));
    if (aux==NULL)
        return (FALSE);

    strcpy(aux->perguntas,d);
    aux->prox=NULL;
    if (q->inicio==NULL)
    {
        q->inicio=aux;
    }


    if(q->fim!=NULL)
    {
        q->fim->prox=aux;
    }

    q->fim=aux;


    return(TRUE);
}
int removee(fila *q, char *d)
{
    struct no *aux;
    if (q->inicio==NULL)
        return (FALSE);

    aux = q->inicio;
    q->inicio = q->inicio->prox;
    if (q->inicio == NULL)
        q->fim = NULL;
    strcpy(d, aux->perguntas);
    free(aux);
    return(TRUE);
}

int isEmpty(fila q)
{
    if (q.inicio == NULL)
        return TRUE;
    return FALSE;
}
void mostraFila(fila q)
{
    struct no *aux;
    if (q.inicio == NULL)
        printf("\nNENHUMA PERGUNTA FOI INSERIDA...\n");
    else
    {
        aux = q.inicio;
        while (aux != NULL)
        {
            printf("%s\n", aux->perguntas);
            aux = aux->prox;

        }
    }
}

