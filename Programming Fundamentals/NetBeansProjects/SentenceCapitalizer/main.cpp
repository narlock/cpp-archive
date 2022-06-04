/*
 * Sentence Capitalizer
 * By: Anthony Narlock
 * 
 * Write a function that accepts a pointer to a C-string as an argument and capitalizes
 * the first character of each sentence in the string. For instance, if the string argument
 * is "hello. my name is Joe. what is your name?" the function should manipulate
 * the string so it contains "Hello. My name is Joe. What is your name?"
 * 
 * Demonstrate the function in a program that asks the user to input a string and then
 * passes it to the function. The modified string should be displayed on the screen
 */

#include <iostream>
#include <cstring>
using namespace std;

void capitalize(char* str);

/*
 * Function: main
 * Summary: Asks the user to enter in a sentence, will capitalize needed characters and return..
 * Parameters: none
 * Returns: outputted solution, returns integer when complete
 * Preconditions: none
 * Postconditions: calls capitalize  
 */

int main() {
    char str[100];
    
    cout << "Enter at least two sentences, but do not use capital letters: \n";
    cin.getline(str, 100);
    cout << "Here are your sentences with beginning words capitalized: \n";
    capitalize(str);
      
    return 0;
}

/*
 * Function: capitalize
 * Summary: searches through the string and capitalizes the needed characters.
 * Parameters: pointer to a the inputted C-string
 * Returns: c-outputs the new sentence
 * Preconditions: none
 * Postconditions: capitalizes the initial letter, then cycles through a for loop and capitalizes every character after periods. 
 */

void capitalize(char* str) {
    //capitalize first 
    if(str[0] != ' ')
        str[0] = toupper(str[0]);
    //run through string, change all characters after each period to capital..
    for(int i = 0; i <= 100; i++) {
        if(str[i] == '.') {
            str[i+2] = toupper(str[i+2]);
        }
    }
    cout << str;
}