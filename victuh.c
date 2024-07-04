#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));

    int roger1 = rand() % 6 + 1;
    int roger2 = rand() % 6 + 1;
    int roger3 = rand() % 6 + 1;

    printf("%d\n", roger1);
    printf("%d\n", roger2);
    printf("%d\n", roger3);
    printf("Pronto");
}