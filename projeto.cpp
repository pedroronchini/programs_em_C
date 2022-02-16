#include <stdio.h>
#include <graphics.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include "meusgraficos.h"

typedef struct
{
    int  x,y;
    char descricao[50];
} orgao;

main()
{
      orgao listaOrgaos[3];

      setlocale(LC_ALL, "Portuguese");

      listaOrgaos[0].x = 247;
      listaOrgaos[0].y = 286;
      strcpy(listaOrgaos[0].descricao, "Rim");

      listaOrgaos[1].x = 136;
      listaOrgaos[1].y = 278;
      strcpy(listaOrgaos[1].descricao, "Fígado");

      listaOrgaos[2].x = 200;
      listaOrgaos[2].y = 210;
      strcpy(listaOrgaos[2].descricao, "Coração");

      // cria e abre uma janela gráfica com 500x520 pixels (largura x altura)
      initwindow(470,500,"Corpo Humano",50,50);
      readimagefile("corpohumano.jpg",0,0,370,450);

      setfillstyle(1,15);
      bar(370,0,470,500);

      botao(20,465,100,495,"Rim");
      botao(120,465,200,495,"Fígado");
      botao(220,465,300,495,"Coração");

      printf("Largura Maxima da Tela = %d\n", getmaxwidth());
      printf("Altura Maxima da Tela = %d\n", getmaxheight());
      printf("Largura Maxima da Janela = %d\n", getmaxx());
      printf("Altura Maxima da Janela = %d\n", getmaxy());

      while(!kbhit())
      {
         printf("\nX=%d, Y=%d ", mousex(), mousey());
         Sleep(100);

         // botao "Rim"
         if (mousex() >= 20 && mousex() <= 100 &&
             mousey() >= 465 && mousey() <= 495 &&
             ismouseclick(WM_LBUTTONDOWN))
         {
             botaoPressionado(20,465,100,495,"Rim");
             Sleep(500);
             botao(20,465,100,495,"Rim");

             setcolor(14);
             circle(listaOrgaos[0].x,listaOrgaos[0].y,30);
             setbkcolor(15);
             setcolor(0);
             outtextxy(370,50,listaOrgaos[0].descricao);
             Sleep(3000);
             setfillstyle(1,15);
             bar(370,50,470,80);
             readimagefile("corpohumano.jpg",0,0,370,450);
         }

         // botao "Fígado"
         if (mousex() >= 120 && mousex() <= 200 &&
             mousey() >= 465 && mousey() <= 495 &&
             ismouseclick(WM_LBUTTONDOWN))
         {
             botaoPressionado(120,465,200,495,"Fígado");
             Sleep(500);
             botao(120,465,200,495,"Fígado");

             setcolor(13);
             circle(listaOrgaos[1].x,listaOrgaos[1].y,50);
             Sleep(3000);
             readimagefile("corpohumano.jpg",0,0,370,450);
         }

         // botao "Coração"
         if (mousex() >= 220 && mousex() <= 300 &&
             mousey() >= 465 && mousey() <= 495 &&
             ismouseclick(WM_LBUTTONDOWN))
         {
             botaoPressionado(220,465,300,495,"Coração");
             Sleep(500);
             botao(220,465,300,495,"Coração");

             setcolor(15);
             circle(listaOrgaos[2].x,listaOrgaos[2].y,30);
             Sleep(3000);
             readimagefile("corpohumano.jpg",0,0,370,450);
         }

         clearmouseclick(WM_LBUTTONDOWN);
      }

      // fecha o modo gráfico e retorna ao modo de saída-padrão (texto)
      closegraph();
}
