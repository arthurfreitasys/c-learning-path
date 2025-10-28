#include <stdio.h>
#include "conversor.h"
int main(void) {
double temperatura;
double convertido;
    char escolha;
printf("qual conversao vc deseja fazer: \n 1 = Celsius para Fahrenheit \n 2 = Fahrenheit para celsius \n Digite:");
scanf_s("%s", &escolha);
        if (escolha == '1') {
            cparaf(temperatura,convertido);
        } else if (escolha == '2') {
            fparac(temperatura,convertido);
        } else {
            printf("conversao invalida");
        }
    return 0;
}