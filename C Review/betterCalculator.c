/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Better Calculator
 */

double calc(double num1, char op, double num2) {
    if(op == '+') {
        double result = num1 + num2;
        return result;
    } else if(op == '-') {
        return num1 - num2;
    } else if(op == '*') {
        return num1 * num2;
    } else if(op == '/') {
        if(num2 == 0) {
            fprintf(stderr, "Division by Zero");
            exit(EXIT_FAILURE);
        } else {
            return num1 * num2;
        }
    }
}

void printCalc(int num1, char op, int num2) {
    if(op == '+') {
        printf("%d + %d = %d", num1, num2, num1 + num2);
    }
}

int main() {
    double num1;
    double num2;
    char op; //operator
    
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter Operator: ");
    scanf(" %c", &op);
    printf("Enter another number: ");
    scanf("%lf", &num2);
    
    
    double result = calc(num1, op, num2);
    printf("The result of %d %c %d = %d", num1, op, num2, result);
    //printCalc(num1, op, num2);
    
    return (EXIT_SUCCESS);
}
