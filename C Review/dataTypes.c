/* 
 * File:   main.c
 * Author: antho
 *
 * Created on December 28, 2021, 7:12 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Primitive Data Types are basic type provided by a programming language
 * that represents a building block for programming. In C, we have the following
 * primitive data types: (Note: Size is denoted in bytes)
 * 
 * int (size: at least 2, usually 4)
 * char (size: 1)
 * float (size: 4)
 * double (size: 8)
 * short int (size: usually 2)
 * unsigned int (size: at least 2, usually 4)
 * long int (size: at least 4, usually 8)
 * long long int (size: at least 8)
 * unsigned long int (size: at least 4)
 * unsigned long long int (size: at least 8)
 * signed char (size: 1)
 * unsigned char (size: 1)
 * long double (size: usually 10, 12, or 16
 */

/*
 * Simple use of variables to store data in C
 */
int main() {
    
    /* 
     * Examples of initializing variables with data
     * Note that a char array represents a string in C
     */
    char name[] = "Anthony";
    int age = 20;
    char birthday[] = "02/21/2001";
    double height = 185.42;
    
    /*
     * Printing information with our stored variables
     * 
     * For printing, use the following for each data type
     * int : %d, %i
     * char : %c
     * string : %s
     * float : %f
     * double : %f, %lf
     * then, apply where you want at the end of the printf
     */
    printf("Hi there, my name is %s!\n"
            "I am %d years old and I was born on %s.\n"
            "I am %f centimeters tall.", name, age, birthday, height);
    
    return (EXIT_SUCCESS);
}

