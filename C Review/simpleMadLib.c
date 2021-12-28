/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Simple Mad Libs
 * 
 * Simulates a simple mad lib in C
 */

int main() {
    char name[256];
    char pNoun1[256];
    char pNoun2[256];
    char pNoun3[256];
    char name2[256];
    
    printf("Enter a name: ");
    scanf("%s", name);
    printf("Enter a plural noun: ");
    scanf("%s", pNoun1);
    printf("Enter a plural noun: ");
    scanf("%s", pNoun2);
    printf("Enter a plural noun: ");
    scanf("%s", pNoun3);
    printf("Enter a name: ");
    scanf("%s", name2);
    
    printf("\n\nDear %s,", name);
    printf("\n%s are red, ", pNoun1);
    printf("\n%s are blue, ", pNoun2);
    printf("\nYou love me and \nI love %s", pNoun3);
    printf("\nFrom %s\n", name2);
            
    return (EXIT_SUCCESS);
}

