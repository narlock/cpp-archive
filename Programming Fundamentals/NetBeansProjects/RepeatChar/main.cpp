/*
 * RepeatChar
 * By: Anthony Narlock
 *
 * Create three definitions of an overloaded function called repeatChar().
 * The first version takes 2 parameters: a char and an int. It returns a
 * string containing the char repeated the right number of times.
 *      Use a for loop to repeatedly add the character to a local string variable
 *      For example, repeatChar('+',10) would return the string "++++++++++"
 * A second version takes a single parameter: a char
 *      It should call the 2-parameter version of repeatChar, passing in the char
 *      and the number 20.
 *      For example, repeatChar('+') would return the string "+++++++++++++++"
 * A third version takes no parameters
 *      It should call the 2-parameter version of repeatChar, passing in '*" and the number 20
 *      For example, repeatChar() would return the string "***********************"
 * Test each of your functions by calling them in your main function.
 * Display the value of each function call.
 */

#include <iostream>
#include <string>
using namespace std;

/* Function: repeatChar
 * Summary: Creates a string using given character and is temp characters long
 * Parameters: a character for symbol, and temp integer for how long string will be
 * Returns: string 
 * Preconditions: must be called through other function
 * Postconditions: for loop which generates the string
 */

string repeatChar(char c, int temp) {
    //Create new variable and for loop using temp for generating string
    string str;
    for(int i = 0; i < temp; i++) {
        str += c;
    }
    return str;
}

/* Function: repeatChar
 * Summary: Creates a string using given character and is 20 characters long
 * Parameters: a character symbol
 * Returns: string 
 * Preconditions: must be called through other function
 * Postconditions: for loop which generates the string using the entered character
 */

string repeatChar(char c) {
    //Create new variable and for loop for generating string
    string str;
    for(int i = 0; i < 20; i++) {
        str += c;
    }
    return str;
    
}

/* Function: repeatChar
 * Summary: returns 20 * symbols when called
 * Parameters: none
 * Returns: string 
 * Preconditions: must be called through other function
 * Postconditions: none
 */

string repeatChar() {
    //Straightforward return 20 stars
    string str = "********************";
    return str;
}

/*
 * Function: main
 * Summary: outputs called functions based off of which overloading function is asked to be outputted
 * Parameters: none
 * Returns: integer when program needs have been met
 * Preconditions: none
 * Postconditions: calls overloaded functions of repeatChar
 *          
 */

int main() {
    //output and call the repeatchar function based off of what is asked for
    cout << repeatChar() << endl;
    cout << repeatChar('=') << endl;
    cout << repeatChar('$') << endl;
    cout << repeatChar('+',30) << endl;
    cout << repeatChar('^',10) << endl;
    
    return 0;
}