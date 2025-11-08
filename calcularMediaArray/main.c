#include <stdio.h>
double mediaArray(int *array, int size);

int main(void) {
    int vetor[5] = {10, 20, 30, 40, 50};
    int size = 5;
    printf("O vetor contem %d numeros inteiros\n", size);
    printf("a media dos vetores eh: %0.1f", mediaArray(vetor, size));
    return 0;
}

double mediaArray(int *array, int size) {
    double media=0;
    for (int i = 0; i < size; i++) {
        media+= array[i];
    }
    media = media / size;
    return media;
}
