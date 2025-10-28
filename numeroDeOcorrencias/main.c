#include <stdio.h>

int caract(char c, char s[]);

int main(void) {
    char frase[] = "banana";
    char c = 'n';
    printf("O numero de ocorrencias da letra: '%c' na palavra '%s' eh: %d",c,frase, caract(c, frase));
    return 0;
}

int caract(char c, char s[]) {
    if (s[0] == '\0') return 0;
    if (s[0] == c) return 1 + caract(c,s+1);
    return caract(c, s + 1);
}
