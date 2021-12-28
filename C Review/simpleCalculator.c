/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Simple Calculator
 * 
 * Adds two numbers inputted by user and outputs the sum
 */

int main() {
    double num1;
    double num2;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    printf("Answer: %f", num1 + num2);
            
    return (EXIT_SUCCESS);
}

