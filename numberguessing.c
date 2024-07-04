#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    const int min = 1;
    const int max = 10;
    int guess = 0;
    int guesses = 0;
    int answer = 0;

    srand(time(0));

    answer = (rand() % max) + min;

    do{
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Muito alto\n");
        }
        else if(guess < answer){
            printf("muito baixo\n");
        }
        else{
            printf("Correto!\n");
        }
        guesses++;

    }while(guess != answer);

    printf("answer: %d\n", answer);
    printf("guesses: %i\n", guesses);
    
    return 0;
}