#include <stdio.h>
#include "conversor.h"
double cparaf (double temperatura, double convertido) {
    printf("Digite a temperatura que vc deseja converter: ");
    scanf("%lf", &temperatura);
    convertido = (temperatura * 9/5) + 32;
    printf("o resultado da conversao de %0.1lf graus em Celsius eh: %0.1lf graus em Fahrenheit", temperatura, convertido);
}
double fparac (double temperatura, double convertido) {
    printf("Digite a temperatura que vc deseja converter: \n");
    scanf("%lf", &temperatura);
    convertido = (temperatura - 32) * 5/9;
    printf("o resultado da conversao de %0.1lf graus em Fahrenheit eh: %0.1lf graus em Celsius", temperatura, convertido);
}
