#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts;
    int score = 0;
    char playAgain;

    srand(time(0));  // Seed random number

    do {
        number = rand() % 100 + 1;  // Random number between 1–100
        attempts = 0;

        printf("\n🎯 Guess the Number (1 to 100)\n");

        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess > number) {
                printf("Too high! Try again.\n");
            } 
            else if (guess < number) {
                printf("Too low! Try again.\n");
            } 
            else {
                printf("Correct! You guessed in %d attempts.\n", attempts);

                // Scoring system
                if (attempts <= 3)
                    score += 10;
                else if (attempts <= 6)
                    score += 5;
                else
                    score += 2;
            }

        } while (guess != number);

        printf("Current Score: %d\n", score);

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nFinal Score: %d\n", score);
    printf("Game Over!\n");

    return 0;
}