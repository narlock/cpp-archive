/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Arrays
 * 
 * A data structure where we can store a large amount of different values
 * Defines a container that stores a number of values of that type.
 */

int main() {
    int luckyNumbers[] = {4, 7, 21}; //Defines integer array with defined values
    int luckyNumbers2[3]; //Defines integer array without defined values (size is 3)
    
    printf("luckyNumbers[0] = %d", luckyNumbers[0]); //Prints the first element of the luckyNumbers array
    
    printf("\nEnter a luckyNumber for luckyNumbers2: ");
    scanf("%d", &luckyNumbers2[0]);
    
    printf("\nYou entered %d", luckyNumbers2[0]);
    
    printf("\nPrint all numbers in luckyNumbers: ");
    
    for(int i = 0; i < (sizeof(luckyNumbers) / sizeof(int)); i++) {
        if (i == (sizeof(luckyNumbers) / sizeof(int)) - 1) {
            printf("%d\n", luckyNumbers[i]);
        } else {
            printf("%d, ", luckyNumbers[i]);
        }
    }
            
    return (EXIT_SUCCESS);
}

