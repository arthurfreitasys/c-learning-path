#include <stdio.h>
int tamstring(char s[]);

int main(void) {
    char frase[] = "Hellow";
    printf("O numeros de caracteres na palavras '%s' eh: %d",frase, tamstring(frase));
    return 0;
}

int tamstring(char s[]) {
    if (s[0] == '\0') return 0;
    return 1 + tamstring(s+1);
}
