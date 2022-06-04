/*
 * Days In a Month
 * By: Anthony Narlock
 * 
 * Write a C++ program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) and the year.
 * 
 * Process: declare variables
 *          prompt user to enter month and year
 *          write out day
 *          if arguments and final output depending on entered information
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    //Declare variables
    int month, year;
    string month_title;
    
    //Prompt user to enter month and year
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    
    //Write out day (We haven't been taught arrays and I wanted it to display this)
    if(month == 1)
        month_title = "January";
    if(month == 2)
        month_title = "February";
    if(month == 3)
        month_title = "March";
    if(month == 4)
        month_title = "April";
    if(month == 5)
        month_title = "May";
    if(month == 6)
        month_title = "June";
    if(month == 7)
        month_title = "July";
    if(month == 8)
        month_title = "August";
    if(month == 9)
        month_title = "September";
    if(month == 10)
        month_title = "October";
    if(month == 11)
        month_title = "November";
    if(month == 12)
        month_title = "December";
     
    //IF arguments & final output
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        cout << "There are 31 days in " << month_title << " of " << year;
    else if(month == 4 || month == 6 || month == 9 || month == 11)
        cout << "There are 30 days in " << month_title << " of " << year;
    else if(month == 2) {
        if(year % 100 == 0 && year % 400 == 0)
            cout << "There are 29 days in " << month_title << " of " << year;
        else if(year % 100 != 0 && year % 4 == 0)
            cout << "There are 29 days in " << month_title << " of " << year;
        else
            cout << "There are 28 days in " << month_title << " of " << year;       
    }
            
        return 0;
            
}


