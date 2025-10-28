//
// Created by thur on 06/10/2025.
//

#include "operacao.h"
#include <stdio.h>

double operador (double num1, double num2) {
    char opera;
    printf("Digite a operacao desejado: \n");
    scanf_s("%s", &opera);
    switch (opera) {
        case '+':
            return num1+num2;
            break;
        case '-':
            return num1-num2;
            break;
        case '*':
            return num1*num2;
            break;
        case '/':
            return num1/num2;
            break;
            default:
            printf("operador invalido \n");
    }
}
