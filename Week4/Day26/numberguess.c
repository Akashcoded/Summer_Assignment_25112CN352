#include <stdio.h>

int main() {
    int secret = 25;
    int guess;

    printf("Guess the number (1-50): ");

    do {
        scanf("%d", &guess);

        if(guess > secret)
            printf("Too High! Try Again: ");
        else if(guess < secret)
            printf("Too Low! Try Again: ");

    } while(guess != secret);

    printf("Congratulations! You guessed the correct number.");

    return 0;
}