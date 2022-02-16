#include <stdio.h>
#include <graphics.h>

void botao(int x1, int y1, int x2, int y2, char rotulo[30]);
void botaoPressionado(int x1, int y1, int x2, int y2, char rotulo[30]);

void botao(int x1, int y1, int x2, int y2, char rotulo[30])
{
    setfillstyle(1,7);
    bar(x1,y1,x2,y2);

    setlinestyle(0,0,2);
    setcolor(15);
    line(x1,y1,x2,y1);
    line(x1,y1,x1,y2);

    setcolor(8);
    line(x2,y1+2,x2,y2);
    line(x1+2,y2,x2,y2);

    setbkcolor(7);
    setcolor(0);
    outtextxy(x1 + ((x2-x1-(strlen(rotulo)*8))/2) + 2, y1+8, rotulo);
}

void botaoPressionado(int x1, int y1, int x2, int y2, char rotulo[30])
{
    setfillstyle(1,7);
    bar(x1,y1,x2,y2);

    setlinestyle(0,0,2);
    setcolor(8);

    line(x1,y1,x2,y1);
    line(x1,y1,x1,y2);

    setcolor(15);
    line(x2,y1+2,x2,y2);
    line(x1+2,y2,x2,y2);

    setbkcolor(7);
    setcolor(0);
    outtextxy(x1 + ((x2-x1-(strlen(rotulo)*8))/2) + 2, y1+9, rotulo);
}
