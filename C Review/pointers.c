/* 
 * File:   main.c
 * Author: antho
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
 * Memory Addresses & Pointers
 * 
 * Pointer is a type of data in which is a memory address
 */

int main() {
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    
    //Print memory address where age is stored
    printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);
    
    //Create a variable that stores physical address of age variable
    int * pAge = &age;
    
    //Dereferencing pointer
    printf("\nPrinting integer in memory location for age: %p\n", *pAge);
    
    return 0;
}
