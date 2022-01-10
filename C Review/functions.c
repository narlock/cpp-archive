/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Functions
 * 
 * Functions are "self contained" modules of code that accomplish 
 * a specific task. Functions take in parameters (or don't) and return
 * a specified value (or return no value, void)
 */

//main is a function that is executed at the beginning of the program
int main() {
    sayHello(); //calling the function sayHello
    sayHelloName("Tony"); //calling the function sayHelloName with argument 
    sayHi("Anthony", 20);
    return (EXIT_SUCCESS);
}

/*
 * sayHello function: prints Hello
 * <return-type> <function-name>(<arguments>) {}
 */
void sayHello() {
    printf("Hello\n");
}

/*
 * sayHello function with name argument: prints Hello <name>!
 * Note: C does not support function overloading - all functions must be named differently
 */
void sayHelloName(char name[]) {
    printf("Hello %s!\n", name);
}

/*
 * sayHi function
 * takes two parameters/arguments: a char array name, and int age
 */
void sayHi(char name[], int age) {
    printf("Hello %s, you are %d years old!\n",name,age);
}