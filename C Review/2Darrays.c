/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
 * 2D Arrays and For loops
 * 
 * Type of loop that allows to iterate over a set of data via
 * an indexing variable.
 * 
 * A 2D array is essentially a matrix, or think of it as an array
 * with a row value and a column value which corresponds to one
 * element inside of the 2D array
 */

int main() {
    //For loop prints numbers 0,1,2,3,4
    for(int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    
    //Initalizing 2D Array
    //nums is a 3 x 2 array, with elements as follows
    int nums[3][2] = {
                    {1,2}, //nums[0][0]
                    {3,4}, //nums[1][1]
                    {5,6} //nums[2][2]
                    };
    /*
     * Alternatively you can do
     * nums[0][0] = {1,2};
     */
    
    //Nested for loop
    //Prints elements in the 2D array
    printf("\nPrinting the 2D Array:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }
    
    int grid[3][3] = {0,1,2,3,4,5,6,7,8};
    
    printf("\nprinting grid:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
