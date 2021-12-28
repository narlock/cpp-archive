/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Working with Numbers
 */

int main() {
    /* Simple math operation printed */
    printf("Adding 1.2 + 2.3 = %f\n", 1.2 + 2.3);
    printf("Subtracting 2.3 - 1.2 = %f\n", 2.3 - 1.2);
    printf("Multiplying 4 * 2 = %d\n", 4 * 2);
    
    printf("Dividing floating points: 4.2 / 0.7 = %f\n", 4.2 / 0.7);
    printf("Dividing integer: 4 / 3 = %d\n", 4 / 3);
    /*
     * Notice this answer is 1, that is because integer division takes the floor of the answer
     * 4 / 3 = 1.333, and the floor(1.333) is 1
     */
    
    /* Simple Math functions - default C math functions */
    printf("\nPower Function: pow(d, p), d = number, p = power...");
    printf(" pow(3, 2) = 3^2 = %f", pow(3,2));
    
    printf("\nSquare Root Function: sqrt(d)... sqrt(4) = 2 = %f", sqrt(4));
    
    /*
     * Other math functions include: floor, ceil, etc.
     */
    
    return (EXIT_SUCCESS);
}

