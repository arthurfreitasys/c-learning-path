#include <stdio.h>

int swap(int *a, int *b);

int main(void) {
    int a = 10;
    int b = 6;
    printf("Valores invertidos: ");
    swap(&a, &b);
}

int swap(int *a, int *b) {
    int i;
    i = *a;
    *a = *b;
    *b = i;
printf("a = %d e b = %d", *a, *b);
}
