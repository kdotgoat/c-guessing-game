#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (guess != secretNumber){
            if(guessCount < guessLimit && !outOfGuesses){
        printf("Enter a number: ");
        scanf("%d", &guess);
        guessCount++;
    }else {
        outOfGuesses = true;
    }
    }
    if(outOfGuesses){
        printf("You lose out of attempts ");

    }else{
printf("You win");
    }


    return 0;
}
