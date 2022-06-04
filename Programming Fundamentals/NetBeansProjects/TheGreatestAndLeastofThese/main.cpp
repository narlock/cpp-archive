/*
 * The Greatest and least of these
 * By: Anthony Narlock
 * 
 * Write a program that lets the user enter a series of integers. 
 * The user should enter -99 to signal the end of the series. 
 * (Hint: You don't know how many times to loop, so use a while loop). 
 * After all the numbers have been entered, the program should display the largest and smallest numbers entered. 
 * (Hint: keep track of the largest and smallest in each loop iteration).
 * 
 * The first iteration, whatever number is entered is both the smallest and the largest.
 *
 * The next iteration, you can determine if the number is greater than your current largest. If so, it becomes the largest.
 */

#include <iostream>
using namespace std;

int main() {
    
    //Declare variables
    int greatest, least, entered_number, count = 0;
    
    //Ask user for first value to determine starting greatest and least value
    cout << "Enter a number in the series: (Enter -99) to quit. ";
    cin >> entered_number;
    
        if(entered_number == -99) {
            cout << "The Program was stopped.\n";
            return 0;
        }
    
    greatest = entered_number;
    least = entered_number;
    
    //Create loop that continues to ask for numbers until -99 is entered.
    while(entered_number != -99) {
        cout << "Enter a number in the series: (Enter -99 to quit) ";
        cin >> entered_number;
        if(greatest < entered_number && entered_number != -99)
            greatest = entered_number;
        if(least > entered_number && entered_number != -99)
            least = entered_number;
    }
    
    //Final output including the greatest and lowest number.
    cout << "The program was stopped. \nThe greatest number in the series was " << greatest << ".\nThe lowest number in the series was " << least << ".\n";
    return 0;
   
}

