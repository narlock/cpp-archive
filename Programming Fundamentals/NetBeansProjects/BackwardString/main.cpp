/*
 * Backward String
 * By: Anthony Narlock
 * 
 * Write a function that accepts a pointer to a c-string as an argument and displays its
 * content backwards. For instance, if the string argument is "Gravity" the function
 * should display "ytivarG". Demonstrate the function in a program that asks the user
 * to input a string then passes it to the function.
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

void backwardString(char* str);

/*
 * Function: main
 * Summary: asks user to input a string, then calls function to output it backwards
 * Parameters: none
 * Returns: return value for success/fail
 * Preconditions: none
 * Postconditions: calls other function
 */

int main() {
    const int MAX_SIZE = 80;
    char str[MAX_SIZE];
    
    cout << "Enter a string of 80 characters or less: \n";
    cin.getline(str,MAX_SIZE);
    cout << str << " spelled backward is "; 
    backwardString(str);
    
    return 0;
}

/*
 * Function: backwardString
 * Summary: Outputs string backwards
 * Parameters: pointer to a the inputted C-string
 * Returns: outputs backwards string
 * Preconditions: none
 * Postconditions: creates temporary c-string, then displays characters in reverse order
 */

void backwardString(char* str) {
    //Create temp pointer string
    char* backward = str;
    
    //run through backward until end of string
    while(*backward != '\0')
        backward++;
    
    //Display each character in reverse order
    while(backward != str) {
        *backward--;
        cout << *backward;
    }
    cout << endl;
}