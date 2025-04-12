#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0)); // random number generator initialization

    int rnd_num = (rand() % 100) + 1; // generates random number between 1 and 100
    int count_guess = 0;
    int user_guess;

    do
    {
        printf("Guess the number (in between 1-100) : ");
        scanf("%d", &user_guess);

        if (user_guess > rnd_num)
        {
            printf("Lower number please!\n");
        }
        else if (user_guess < rnd_num)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrats!!\n");
        }
        count_guess++;

    } while (user_guess != rnd_num);

    printf("You guessed the number in %d guesses", count_guess);

    return 0;
}