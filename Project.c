/*
Snake, water, gun or rock, paper, scissors is a game most of us have played during
school time. (I sometimes play it even now).

Write a C program capable of playing this game with you.

Your program should be able to print the result after you choose snake/water or gun.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;

    /*
    0 --> Snake
    1 --> Water
    2 --> Gun
    */

    while (1)
    {
        printf("\nEnter 0 for Snake\n Enter 1 for Water\n Enter 2 for Gun \n Enter 9 to Exit : ");
        scanf("%d", &player);

        printf("Computer get %d\n", computer);


        if (player == 9)
        {
            printf("\nThank You for using");
            break;
        }

        if (player == 0 && computer == 0)
        {
            printf("\nDraw!");
        }
        else if (player == 0 && computer == 1)
        {
            printf("\nPlayer Wins!");
        }
        else if (player == 0 && computer == 2)
        {
            printf("\nComputer wins!");
        }
        else if (player == 1 && computer == 0)
        {
            printf("\nComputer wins!");
        }
        else if (player == 1 && computer == 1)
        {
            printf("\nDraw!");
        }
        else if (player == 1 && computer == 2)
        {
            printf("\nPlayer wins!");
        }
        else if (player == 2 && computer == 0)
        {
            printf("\nPlayer wins!");
        }
        else if (player == 2 && computer == 1)
        {
            printf("\nComputer wins!");
        }
        else if (player == 2 && computer == 2)
        {
            printf("\nDraw!");
        }
        else
        {
            printf("\nWrong input\n");
        }
    }
    return 0;
}