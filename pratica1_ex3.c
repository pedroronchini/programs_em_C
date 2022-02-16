#include <stdio.h>
#include <string.h>
#include <malloc.h>

char * invert (char * str);

int main() {
    char * str;
    char * str_original = "Ana";
    str = invert(str_original);

    printf("\n%s", str);

    if(strcmp(str, str_original) == 0) {
        printf("\nEh palidronimo");
    }
    else {
        printf("\nNão eh palidronimo");
    }
}
char * invert (char * str) {
    int tam = strlen(str);
    int i;
    char * str_retornada;

    str_retornada = (char *) malloc(tam+1);

    for(i = 0; i < tam; i++) {
        str_retornada[i] = str[(tam-1) - i];
    }
    str[tam+1] = '\0';

    return str_retornada;
}
