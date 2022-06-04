/* Dynamic Memory
 * By: Anthony Narlock
 * 
 * Write a program that does the following.  It should dynamically allocate an array of 5 integers.  
 * Check to see if the allocation was successful.  It should prompt the user to enter values into the array.  
 * It should then double the values in the array.  Finally, it should display the values in the array.  
 * Before ending, the program should release the storage that was allocated
 */

#include <iostream>
using namespace std;

int* fillDoubleArray(int size);

/*
 * Function: main
 * Summary: Calls fillDoubleArray, displays doubled numbers, then deletes pointer
 * Parameters: none
 * Returns: outputted solution, returns integer when complete
 * Preconditions: none
 * Postconditions: for statement from pointer array.      
 */

int main() {
    //Declare size variable and pointer for array(call fillDoubleArray)
    const int SIZE = 5;
    int* ptr = fillDoubleArray(SIZE);
    
    //Print doubles
    cout << "\nThe integers that you entered doubled are: " << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << ptr[i] << endl;
    }
    
    //Delete pointer, return
    delete[] ptr;
    return 0;
}

/*
 * Function: fillDoubleArray
 * Summary: Asks user to enter in 'size' amount of integers, then returns the integers via pointer
 * Parameters: size integer
 * Returns: pointer array
 * Preconditions: must be called, size must be defined
 * Postconditions: for statement that covers 0-size-1, that's how many integers the computer will ask for  
 */

int* fillDoubleArray(int size) {
    //Declare pointer with array
    int *ptr = nullptr;
    ptr = new int[size];
    
    //Ask for values
    for(int i = 0; i < size; i++) {
        cout << "Please enter an integer: ";
        cin >> *(ptr + i);
        ptr[i] = (ptr[i]) * 2;
    }
    
    return ptr;
}