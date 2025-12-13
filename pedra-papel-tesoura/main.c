#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char continuar;
    char escolha_player;
    char opcoes[] = {'r', 'p', 't'};
    do {
        printf("\nDeseja jogar pedra, papel tesoura? s = Sim, n = Nao\n");
        continuar = getchar();
        while (getchar() != '\n');
        do {
            printf("Escolha: Pedra = r, papel = p, tesoura = t\n");
            printf("------------------------------------------\n");
            escolha_player = getchar();
            while (getchar() != '\n');
        } while (escolha_player != 'r' && escolha_player != 'p' && escolha_player != 't');
        printf("Voce escolheu: ");
        if (escolha_player == 'r') printf("Pedra\n");
        else if (escolha_player == 'p') printf("Papel\n");
        else if (escolha_player == 't') printf("Tesoura\n");
        srand(time(NULL));
        char escolha_computador = opcoes[rand() % 3];
        printf("O computador escolheu: ");
        if (escolha_computador == 'r') printf("Pedra\n");
        else if (escolha_computador == 'p') printf("Papel\n");
        else if (escolha_computador == 't') printf("Tesoura\n");
        if (escolha_computador == escolha_player) {
            printf("Empate\n");
        } else if (escolha_computador == 'r' && escolha_player == 'p') {
            printf("Voce venceu\n");
        } else if (escolha_computador == 'p' && escolha_player == 't') {
            printf("Voce venceu\n");
        } else if (escolha_computador == 't' && escolha_player == 'r') {
            printf("Voce venceu\n");
        } else {
            printf("Voce perdeu\n");
        }
        printf("---------------------------------------\n");
    } while (continuar == 'S' || continuar == 's');
}
