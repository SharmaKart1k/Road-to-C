// NUMBER GUESSING GAME
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
// this fn is to add option to play again
{
    char play_again;
    srand(time(0));
    do
    {
        // this fn generates a random number
        int randomnumber = (rand() % 100) + 1;
        int no_of_guesses = 0;
        int guessed;
        // printf("%d", randomnumber);
        printf("\nWELCOME TO THE NUMBER GUESSING GAME\n");
        do
        {
            printf("\nGUESS THE NUMBER: ");
            scanf("%d", &guessed);
            if (randomnumber < guessed)
            {
                printf("LOWER NUMBER PLEASE \n");
            }
            else if (randomnumber > guessed)
            {
                printf("HIGHER NUMBER PLEASE\n");
            }
            else
            {
                printf("\nCONGRATS!!!you got a win\n");
            }
            no_of_guesses++;

        } while (randomnumber != guessed);

        printf("\nTotal guesses you've taken to get the correct number are:%d\n", no_of_guesses);
        if (no_of_guesses <= 5)
        {
            printf("\nEXCELENT,guessed within %d guesses\n", no_of_guesses);
        }
        else if (no_of_guesses >= 5 && no_of_guesses <= 10)
        {
            printf("\nWELL DONE,guessed within %d guesses\n", no_of_guesses);
        }
        else
        {
            printf("\nBETTER LUCK NEXT TIME TOO MANY GUESSES\n");
        }
        printf("\ndo you want to PLAY AGAIN (y/n) ?  ");
        scanf(" %c", &play_again);
    } while (play_again == 'y' || play_again == 'Y');

    printf("\nTHANKS FOR PLAYING\n");

    return 0;
}