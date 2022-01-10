/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Functions with return types
 * 
 * Functions are "self contained" modules of code that accomplish 
 * a specific task. Functions take in parameters (or don't) and return
 * a specified value (or return no value, void)
 * 
 * Return types allow a function to return a piece of information
 */

/*
 * cubeInteger function returns an integer
 * and takes an integer as parameter
 */
int cubeInteger(int num) {
    return (num * num * num);
}

/*
 * cube function returns a double
 * and takes a double as parameter
 */
double cube(int num) {
    return (num * num * num);
}

int main() {
    printf("%d\n",cubeInteger(2));
    printf("%f\n",cube(3));
    return (EXIT_SUCCESS);
}

/*
 * Important takeaways is to understand the scope of functions.
 * Variables that are defined within a functions scope are only
 * local to those functions. For example, num in either of our
 * cube functions cannot be accessed inside of the main function.
 * 
 * Likewise, if we were to define a variable inside of the main
 * function, we would not be able to use it in either of our
 * cube functions because it is not within their scope.
 * 
 * We can send variables as arguments to these functions, however
 * they will not be the actual argument themselves. If we assigned a
 * variable to replace something we already had, we would have it from
 * there.
 */
