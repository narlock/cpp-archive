#include <iostream>
using namespace std;

int main() {
    enum month {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };
    string months[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int rainfall[DECEMBER + 1];
    
    for(int i = JANUARY; i <= DECEMBER; i++) {
        cout << "Enter the amount of rainfall for the month of " << months[i] << ": ";
        cin >> rainfall[i];
    }
    
    cout << "\nThe rainfall for " << months[FEBRUARY] << " was: " << rainfall[FEBRUARY];
    
    return 0;
}