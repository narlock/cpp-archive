/*
 * Largest and Smallest Array Values
 * By: Anthony Narlock
 * 
 * Write a program that lets the user enter 10 values into an array.
 * The program should then display the largest and smallest values in the array.
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int findSmallest(int array[], int SIZE);
int findLargest(int array[], int SIZE);

/* Function: main
 * Summary: The program prompts user to enter in values into an array, functions are then called returning smallest and largest
 * Parameters: none
 * Returns: integer on completion of program
 * Preconditions: none
 * Postconditions: for loop cycles through array
 */

int main() {
    //Declare variables
    const int SIZE = 10;
    int array[SIZE];
    
    //Title
    cout << "This program will ask you to\n"
            "enter ten values, then it will\n"
            "determine the largest and smallest\n"
            "of the values you entered.\n";
    
    //For statement that asks user to enter 10 numbers, add numbers to array
    for(int i = 0; i < SIZE; i++) {
        cout << "Enter a value: ";
        cin >> array[i];
    }
    
    //Output final solution by calling functions to calculate largest/smallest
    cout << "The largest value entered is ";
    cout << findLargest(array,SIZE) << endl;
    cout << "The smallest value entered is ";
    cout << findSmallest(array,SIZE) << endl;
    
    return 0;
}

/* Function: findSmallest
 * Summary: Cycles through given array and returns the smallest value
 * Parameters: integer array, size of array
 * Returns: integer 
 * Preconditions: must be called through other function
 * Postconditions: for loop which cycles through array comparing them, finding the smallest value
 */

int findSmallest(int array[], int SIZE) {
    int smallest = array[0];
    for(int i = 0; i < SIZE; i++) {
        if(array[i] < smallest) {
            smallest = array[i];
        }
    }
    return smallest;
}

/* Function: findLargest
 * Summary: Cycles through given array and returns the largest value
 * Parameters: integer array, size of array
 * Returns: integer 
 * Preconditions: must be called through other function
 * Postconditions: for loop which cycles through array comparing them, finding the largest value
 */

int findLargest(int array[], int SIZE) {
    int largest = array[0];
    for(int i = 0; i < SIZE; i++) {
        if(array[i] > largest) {
            largest = array[i];
        }
    }
    return largest;
}