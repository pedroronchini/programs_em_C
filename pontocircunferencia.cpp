#include <stdio.h>
#include <graphics.h>
#include <math.h>

main()
{
      int x,y,a,b,r,d;
      int largura = 300, altura = 300;
      initwindow(largura,altura,"Ponto e Circunferencia",
                 getmaxwidth()/2-largura, getmaxheight()/2-altura);

      r = 50; // representa o raio da circunfer�ncia
      a = getmaxx()/2; // representa a coordenada x do centro da circunfer�ncia
      b = getmaxy()/2; // representa a coordenada y do centro da circunfer�ncia

      // tra�a um c�rculo com base na circunfer�ncia definida por a,b,r
      setcolor(14);
      setfillstyle(1,4);
      fillellipse(a,b,r,r);

      while(!kbhit())
      {
         // click com o botao esquerdo do mouse
         if (ismouseclick(WM_LBUTTONDOWN))
         {
             // guarda as coordenadas x e y de um ponto, relativo ao click de mouse
             x = mousex();
             y = mousey();
             // desenha um pixel na cor branca para identificar o ponto
             putpixel(x,y,15);

             // usando geometria anal�tica, calcula-se a dist�ncia
             // entre o ponto x,y e o centro do c�rculo (a,b)
             d = sqrt((pow(x-a,2) + pow(y-b,2)));

             // verifica se o ponto � interno ou externo � circunfer�ncia
             if (d <= r)
                 printf("Ponto interno 'a circunfer�ncia...\n");
             else
                 printf("Ponto externo 'a circunfer�ncia...\n");
         }

         //clearmouseclick(WM_LBUTTONDOWN);
      }

      // fecha o modo gr�fico e retorna ao modo de sa�da-padr�o (texto)
      closegraph();
}
