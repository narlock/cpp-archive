/*
 * String Length
 * By: Anthony Narlock
 * 
 * Write a function that returns an integer and accepts a pointer to a c-string as an argument
 * The function should count the number of characters in the string and return that
 * number. Demonstrate the function in a simple program that asks the user to input a
 * string, passes it to the function, and the  displays the function's return value.
 * 
 * 
 */

#include <iostream>
#include <cstring>
using namespace std;

int getLength(char* str);

/*
 * Function: main
 * Summary: prompts user to enter string then outputs its length
 * Parameters: none
 * Returns: after outputs, return value of success/fail
 * Preconditions: none
 * Postconditions: input, then calls getLength function 
 */

int main() {
    const int MAX_SIZE = 80;
    char str[MAX_SIZE];
    
    cout << "Please enter a string of 80 characters of less: \n";
    cin.getline(str,MAX_SIZE);
    //cout << "DEBUG: str == " << str << endl;;
    cout << "The length of that string is: " << getLength(str);
    
    return 0;
}

/*
 * Function: getLength
 * Summary: returns the length of the string
 * Parameters: pointer to a the inputted C-string
 * Returns: outputs backwards string
 * Preconditions: none
 * Postconditions: cycles through the string until null character is found, then returns the counter
 */

int getLength(char* str) {
    int count = 0;
    while(str[count] != '\0') {
        count++;
    }
    
    return count;
}