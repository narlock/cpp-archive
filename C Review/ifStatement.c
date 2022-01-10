/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * If Statements
 * 
 * If statements are a programming structure in which we
 * can use to help our programs make decisions. It is relatively
 * intuitive. If this, then that. If this, else if this, else that. etc.
 * 
 * If statements are also referred to as boolean conditions - they
 * are either true or false.
 * 
 * We have operations in C as follows:
 * > : Greater than
 * < : Less than
 * >= : Greater than or equal to
 * <= : Less than or equal to
 * == : Equal to
 * && : AND
 * || : OR
 * != : Not Equal to
 * ! : NOT
 */

/*
 * maxInt function
 * determines the maximum of two integers
 * 
 * Makes a decision using if statements to find which int is the max.
 */
int max(int num1, int num2) {
    if(num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1 = 4;
    int num2 = 6;
    
    printf("The max between %d and %d is %d\n", num1, num2, max(num1, num2));
    
    /* For three numbers, we could make a completely different function,
     * but we can simply do the following:
     */
    int num3 = 5;
    printf("The max between %d, %d, and %d is %d\n",num1,num2,num3, max(max(num1,num2),num3));
    return (EXIT_SUCCESS);
}
