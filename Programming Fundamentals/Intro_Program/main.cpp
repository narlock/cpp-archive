/*
 * This is the intro assignment to CSCI 1081
 * By: Anthony Narlock
 * 
 * The purpose of this project is to print "Hello World"
 * as well as calculate the area of a rectangle
 * 
 */

// Preprocessor directive - planning for the program to output something
# include <iostream>
using namespace std;

int main() {
    // Console OUTPUT - uses stream process directives
    cout << "Hello World" << endl;
    cout << 4 * (15 / (1+3)) << endl;
    int number = 38, children = 4, cookies;
    cookies = number % children;
    cout << cookies << endl;;
    //backslash n is the same as using endl
    cout << "Calculate area of a rectangle: \n";
    
    //Define variables
    double length, width, area;
    
    //Get the length from the user and print the length
    cout << "Enter a length: ";
    cin >> length;
    cout << length << endl;
    
    //Get the width from the user and print the width
    cout << "Enter a width: ";
    cin >> width;
    cout << width << endl;
    
    //Calculate area
    area = length * width;
    
    //Ending statement & outputting value
    cout <<"The area is: " << area << endl;
    
    return 0;
    
}
