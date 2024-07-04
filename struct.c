#include <stdio.h>
#include <string.h>

/*struct = coleção de números relacionados(váriaveis)
            podem ser diferentes tipos de dados
            listados sob um nome no bloco de memoria
            muito similar a classes em outras linguagens*/

struct Player
{
    char name[12];
    int score;
};

int main()
{
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Bro");
    player1.score = 4;

    strcpy(player2.name, "Brah");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);
}