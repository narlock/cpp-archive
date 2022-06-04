/*
 * Magic Dates
 * By: Anthony Narlock
 * 
 * The date June 10th, 1960 is special because when we write it in the following format, the month times
 * the day equals the year.
 * 
 * 6/10/60
 * 
 * Write a C++ program that asks the user to enter a month (in numeric form), a day, and a two-digit
 * year. The program should then determine whether the month times the day is equal to the year. IF
 * so, it should display a message saying the date is magic. Otherwise it should display a message
 * saying the date is not magic.
 * 
 * Process: Declare Variables
 *          Ask user for values
 *          Compare the values
 *          output inside of if/else statements
 */

#include <iostream>
using namespace std;

int main() {
    
    //Declare variables
    int month, day, year;
    
    //Ask user for values
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the year (in numeric form; 1960 is 60): ";
    cin >> year;
    
    //Compare the values
    if(year == (month * day)) 
        cout << "The date " << month << "/" << day << "/" << year << " is magic.";
    else 
        cout << "The date " << month << "/" << day << "/" << year << " is NOT magic.";
    
    return 0;
        
    
        
}