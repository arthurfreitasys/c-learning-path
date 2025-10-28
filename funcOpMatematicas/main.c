#include <stdio.h>
#include "operacao.h"
int main(void) {
    double num1;
    double num2;

    printf("Digite os valor de A: \n");
    scanf("%lf", &num1);
    printf("Digite o valor de B: \n");
    scanf("%lf", &num2);
    printf("Resultado: %0.2lf ", operador(num1,num2));
    return 0;
}