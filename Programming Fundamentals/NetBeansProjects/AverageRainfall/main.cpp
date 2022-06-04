/*
 * Average Rainfall
 * By: Anthony Narlock
 * 
 * Write a program that uses nested loops to collect data and calculates the average rainfall over a period of years. 
 * The program should first ask for the number of years. The outer loop will iterate once for each year. 
 * The inner loop will iterate 6 times, once for each summer month (to reduce the amount of data you need to enter, we'll assume only 6 months in a year).
 * Each iteration of the inner loop will ask the user for the inches of rainfall for that month.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SUMMER_MONTHS_PER_YEAR = 6;
    int years, inch, total_months, total_rainfall, average_inches;
    
    cout << "This program will calculate average rainfall over a period of years.\nHow many years do you wish to average? ";
    cin >> years;
    
    for(int i = 1; i < years+1; i++) {
        cout << "Year " << i << endl;
        for(int j = 1; j < SUMMER_MONTHS_PER_YEAR+1; j++) {
            cout << "Number of inches of rain for month " << j << "? ";
            cin >> inch;
            
            cout << "DEBUG: TOTAL MONTHS = " << total_months << endl;
            total_months++;
            total_rainfall += inch;
            
        }
        cout << endl;
    }
    average_inches = total_rainfall / total_months;
    cout << "Over a period of " << total_months << " months, " << total_rainfall << " inches of rain fell."
            "\nAverage monthly rainfall for the period is " << setprecision(3) << average_inches << " inches.";
    
    return 0;
}

