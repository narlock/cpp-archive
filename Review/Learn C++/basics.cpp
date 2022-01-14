/* 
 * Title: C++ Basics
 * Author: Anthony Narlock
 *
 * Variables/Data Types, Operators, If/ElseIf/Else, Functions
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*
 * This is the main function. It represents the beginning of every
 * C/C++ program.
 * 
 * To begin with understanding, we'll look at functions. The return type
 * of the function is going to be before the function name
 * <return type> <function name>(<arguments>) { code block }
 * 
 * return 0 for main represents a RUN SUCCESSFUL
 * return 1 for main represents a RUN FAILED
 */

/*
 * When we create our own functions in C++, we can denote them with
 * a function prototype. Function prototypes eliminate the need 
 * to place a function definition before all calls to the function.
 */
int sumTwoIntegers(int num1, int num2);

int main() {
    /*
     * Inside of the main function is we can begin to write
     * the instructions of the code. These work in order, that is
     * the first line in main will be the first that is executed
     * by the program, and so forth.
     */
    
    /*
     * Variables/Data Types
     * 
     * Variables are programmer-given names to different kinds of data types.
     * They are essentially a reference to something in our data. We can assign
     * variables to represent a data type.
     * 
     * While C++ is not necessarily an Object Oriented Language, it still 
     * offers similarities to real Object Oriented Languages like Java.
     * 
     * C++ Data Types include:
     *  int, float, double, char, string (with #include <string>), and bool
     */
    
    //Initializing variables with data types
    int myNum = 14;
    float myFloat = 3.14;
    double myDouble = 5.6778;
    char myFirstInitial = 'A';
    string myName = "Anthony";
    bool myBool = true;
    
    /*
     * To do Console I/O, we must have iostream imported (see line 7)
     * cout -> Console output operator
     * cin -> Console input operator
     * 
     * We use << and >> to denote output and input operation
     * The endl keyword essentially throws a \n at the end of the output line
     * 
     * There are additional things you can do with cout, such as
     * print something a specific way, we can setprecision, setwidth, etc.
     * 
     * To input values, we use cin
     */
    
    //Printing out the variables I assigned
    cout << "My name is " << myName << ". myNum is equal to " << myNum << endl;
    
    //Inputting a value
    int inputtedNumber;
    
    cout << "Enter a number: ";
    cin >> inputtedNumber;
    
    cout << "The number you inputted was " << inputtedNumber << endl;
    
    /*
     * The cin function works for all of the standard data types,
     * however, if you want to get a string and that string
     * requires an input that is more than a single 'word', we can use
     * the getline function.
     */
    
    /*string myString;
     *cout << "Enter a sentence: ";
     *getline(cin,myString);
     *
     *cout << "The sentence you typed was: " << myString << endl;
     */
    
    /*
     * Operators
     * 
     * Arithmetic: +, -, *, /, %
     * Logic: &&, ||, !
     * Conditional: ==, >=, <=, >, <
     * Assignment: =
     */
    cout << "The sum of myFloat and myDouble is " << myFloat + myDouble << endl;
    
    /*
     * If/elseif/else
     * Similar to logic, we don't need all of them but use when necessary
     */
    if((myFloat + myDouble) == 19) {
        cout << "myFloat + myDouble was equal to 19!" << endl;
    } else if ((myFloat + myDouble) > 19) {
        cout << "myFloat + myDouble was larger than 19!" << endl;
    } else {
        cout << "myFloat + myDouble was smaller than 19!" << endl;
    }
    
    /*
     * We defined the function sumTwoIntegers using the prototype above,
     * we defined that function after the main function code block.
     * 
     * We can now call that function inside of this function.
     */
    
    int num1 = 4;
    int num2 = 6;
    cout << "The sum of num1 and num2 is " << sumTwoIntegers(num1, num2) << endl;
    
    return 0;
}

/*
 * Our function definitions, we will define our functions based on
 * the prototypes that we have already listed.
 */
int sumTwoIntegers(int num1, int num2) {
    return num1 + num2;
}

