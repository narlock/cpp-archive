/*
 * Sum of Digits in a String
 * By: Anthony Narlock
 * 
 * Write a program that asks the user to enter a series of single digit numbers with nothing
 * seperating them. Read the input as a C-string or a string object. The program should
 * display the sum of all the single-digit numbers in the string. For example, if the user
 * enters 2514, the program should display 12, which is the sum of 2,5, 1, and 4. The
 * program should also display the highest and lowest digits in the string.
 */

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

/*
 * Function: main
 * Summary: asks user to input a string of numbers which are then converted to integers, displaying the sum, highest and lowest values as integers.
 * Parameters: none
 * Returns: outputted solution, returns integer when complete
 * Preconditions: none
 * Postconditions: conversion of c-string to integer, is compared using if statements keeping a running total for sum....   
 */

int main() {
    //Declare variables
    int total = 0;
    int index, num;
    char str[15];
    //Prompt user for string..
    cout << "Enter a string of numbers: ";
    cin.getline(str,15,'\n');
    //Convert the string to an integer and set initial min/max
    //find note from class...
    num = atoi(str);
    index = num % 10;
    int max = index;
    int min = index;
    
    while(num > 0) {
        index = num % 10;
        //index compare with small value/large
        if(min > index)
            min = index;
        if(max < index)
            max = index;
        //calculate sum
        total = total + index;
        num = num / 10;
    }
    
    cout << "The sum of " << str << " is " << total << endl;
    cout << "The highest digit is " << max << endl;
    cout << "The lowest digit is " << min << endl;
    
    return 0;
}