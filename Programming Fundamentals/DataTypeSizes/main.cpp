/*
 * Class activity - Sizes of data types
 * By: Anthony Narlock
 * 
 * Task: Write a program that will display the size of all the numeric data types you learned:
 * short, unsigned short, integer, unsigned, long, unsigned long, long long, unsigned long long, float, double, long double
 * 
 * Task 2: Display the size of 'A' and 'Apple'
 *         Create a variable named str and initialize it to 'Apple'
 * 
 */

# include <iostream>
# include <string>
using namespace std;

int main() {
    
    cout << "Size of a short is: " << sizeof(short) << endl;
    cout << "Size of a unsigned short is: " << sizeof(unsigned short) << endl;
    cout << "Size of an integer is: " << sizeof(int) << endl;
    cout << "Size of an unsigned integer is: " << sizeof(unsigned) << endl;
    cout << "Size of a long is: " << sizeof(long) << endl;
    cout << "Size of an unsigned long is: " << sizeof(unsigned long) << endl;
    cout << "Size of a long long is: " << sizeof(long long) << endl;
    cout << "Size of an unsigned long long: " << sizeof(unsigned long long) << endl;
    cout << "Size of a float: " << sizeof(float) << endl;
    cout << "Size of a double: " << sizeof(double) << endl;
    cout << "Size of a long double: " << sizeof(long double) << endl;
    
    cout << "Size of 'A': " << sizeof("A") << endl;
    
    string str = "Apple";
    cout << "The size of str is " << str.length();
    
    return 0;
}

