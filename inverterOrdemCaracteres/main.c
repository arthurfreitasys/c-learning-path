#include <stdio.h>
char reverse(char s[]);

int main(void) {
    char frase[] = "Hello";
    printf("a palavra '%s' escrita ao contrario fica assim: ", frase);
    reverse(frase);
    return 0;
}

char reverse(char s[]) {
    if (s[0] == '\0') return 0;
    reverse(s + 1);
    printf("%c", s[0]);
}