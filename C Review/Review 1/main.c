/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Getting User Input
 * 
 * A lot of times in programming, we want to get information
 * from the user.
 * 
 * We use the scanf function to scan for information, we can store
 * this information in a variable with the second argument.
 * 
 * For primitive data types, we want to assign the '&' character
 * before the name of the variable. This is different for string
 * type, which just needs the name.
 * 
 * Scanf for strings will get all of the characters typed in
 * and stop at the first whitespace (either complete, or a space is entered)
 * So entering 'Anthony Narlock' at the first prompt would only yield the
 * value of 'Anthony' being stored.
 */

int main() {
    //Declaration of variables we want to use
    int age;
    char name[256];
    char sentence[256];
    
    //Print Prompt
    printf("Enter your name: ");
    scanf("%s", name);
    
    //Next Prompt
    printf("\nHey there, %s. \nEnter your age: ", name);
    scanf("%d", &age);
    printf("%s is %d years old.\n", name, age);
    
    //flush input buffer
    while ( getchar() != '\n' );
    
    //fgets - Let's print a custom Sentence
    printf("\n\nEnter a small sentence: ");
    fgets(sentence, 256, stdin); //The first arg is the variable name, the second arg is character limit, third is standard input
    printf("%s", sentence);
            
    return (EXIT_SUCCESS);
}

