#include <stdio.h>

int calcularBase(int x, int y);

int main(void) {
    int x = 3;
    int y = 5;
    printf("O resultado de %d elevado a %d eh: %d",x,y, calcularBase(x,y));
    return 0;
}

int calcularBase(int x, int y) {
    if (y == 0) return 1;
    return x * calcularBase(x, y-1);
}
