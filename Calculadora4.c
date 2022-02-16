/* Calcula quatos azuleijos cabem em uma parede*/
#include<stdio.h>
int main()
{
    int num1, num2,num3,num4;
    num1=4;
    num2=4;
    num3=8;
    num4=12;
    printf("O numero de azuleijos que cabem em uma parede com %d cm de comprimento e %d cm  de altura e %d",num4,num3,
           (num1*num2)/ num3*num4);

    return 0;

}
