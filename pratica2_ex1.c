#include <stdio.h>

int repetir (int n);

int main() {
    int n , r , i ;
    n = 11; i =1000;
    r = repetir (n );
    printf ("%d", r);
}

int repetir (int n) {
    int i;
    for (i = 0; i < n; i++) {
        int i;
        i = 500;
        n--;
    }

    return i;
}
