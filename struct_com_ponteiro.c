#include <stdio.h>
typedef struct
{
    int c; //0
    char n[6]; //2
    float f; //8
}usuario;

int main()
{
    usuario v[3] = {1, "jose", 1.75,
                    2, "ana", 1.70,
                    3, "maria", 1.76}, *p;
    float s, m;

    printf("%d", v[1].c);
    printf("%f", v[2].f);

    p = v;

    s = 0;
    s = s + p -> f;
    p++;
    s = s + p -> f;
    p++;
    s = s + p -> f;

    m = s / 3;

    printf("%f", m);

    return 0;
}
