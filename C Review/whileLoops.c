/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
 * While Loops
 * 
 * A structure that you can use to loop over and execute
 * a specific block of code until a condition is satisfied
 * to end the loop
 */

int main() {
    //Creating a guessing game
    srand(time(NULL));
    int r = rand() % 20; //Generates random number between 0 and 19
    int guess;
    
    printf("r = %d\n", r);
    printf("Welcome to Guessing Game\nCreated by Anthony Narlock\n====\n");
    
    while(guess != r) {
        printf("Guess a number: ");
        scanf("%d", &guess);
    }
    printf("\nThanks for playing");
    
    return 0;
}
