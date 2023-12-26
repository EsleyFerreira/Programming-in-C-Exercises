#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int num = 0, raffle = 0, attemps = 0;
    char option;

    srand(time(NULL));
    raffle = rand() % 100;

    do
    {
        attemps++;
        printf("attemps number %d", attemps);
        printf("attempts to guessI the number:\n");

        scanf("%d", &num);
        if (num == raffle)
        {
            printf("*************************************\n");
            printf("* Congratulations, you are awesome! *\n");
            printf("*************************************\n");

            break;
        }
        if (num < raffle)
        {
            printf("\nIncorrect, guess a higher number.");
        }
        else
        {
            printf("\nIncorrect, guess a lower number.");
        }
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        printf("Try again ? (S/N)\n");
        scanf("%c", &option);

    } while (option == 'S' || option == 's');

    return 0;
}