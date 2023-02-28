#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice, dice2, dice3, total;
    char play;

    srand(time(NULL));

    printf("Bem-vindo ao jogo de dados!\n\n");

    printf("\nPressione 'ENTER' para jogar os dados...");

    do {

        time_t now;
        time(&now);

        getchar();

        dice = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        dice3 = rand() % 6 + 1;

        total = dice + dice2 + dice3;

        printf("\nDado 1: %d\n", dice);
        printf("Dado 2: %d\n", dice2);
        printf("Dado 2: %d\n", dice3);
        printf("Total de pontos: %d\n", total);
        printf("Time : %s\n", ctime(&now));

        printf("Deseja jogar novamente? (s/n): ");
        scanf(" %c", &play);
    } while (play == 's' || play == 'S');
    printf("\nObrigado por jogar!\n");

    return 0;
}
