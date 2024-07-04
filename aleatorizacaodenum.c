#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));

    int dado1 = rand() %6 + 1;
    int dado2 = rand() %6 + 1;
    int dado3 = rand() %6 + 1;

    printf("%i", dado1);
    printf("\t%i", dado2);
    printf("\t%i", dado3);
}