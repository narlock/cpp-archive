/*
 * Pennies for Pay
 * By: Anthony Narlock
 * 
 * Write a program that calculates how much a person would earn over a period of time if his or her
 * salary is one penny the first day and two pennies the second day, and continues to double each day.
 * The program should ask the user for the numbers of days. Display a table showing how much the
 * salary was for each day, and then show the total pay at the end of the period. The output should be
 * displayed in a dollar amount, not the number of pennies.
 * 
 * Input validation: Do not accept a number less than 1 for the numbers of days worked. Use a while
 * loop to keep prompting until the number of days worked is >= 1.
 *  
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double total = 0;
    double pay_for_day = 0.01;
    int days, current_day = 1;
    
    cout << "Enter the number of days: ";
    cin >> days;
    
    while(days < 1) {
        cout << "The number of days must be at least one.\n";
        cout << "Enter the number of days: ";
        cin >> days;
    }
    
    cout << "Day\t\tTotal pay\n----------------------\n";
    for(int i = 0; i < days; i++) {
        cout << current_day << "\t$\t" << pay_for_day << endl;
        current_day++;
        total = total + pay_for_day;
        pay_for_day = pay_for_day * 2;
        
        //cout << "\nDEBUG: TOTAL = " << total << endl;
    }
    cout << "\n----------------------\nTotal\t$\t" << total;
    return 0;
}

