/*
 * PLEASE READ: Spoke to you after class on 9/4, we agreed that it was okay if I used the cin function.
 * The purpose of this program is to calculate Miles per gallon
 * By: Anthony Narlock
 * 
 */

# include <iostream>
using namespace std;

int main() {
    //initialize variables
    double miles, gallons, mpg;
    
    //ask user how many miles and print entered number after inputted
    cout << "How many miles? ";
    cin >> miles;
    cout << miles << endl;
    
    //ask user how many gallons and print entered number after inputted
    cout << "How many gallons? ";
    cin >> gallons;
    cout << gallons << endl;
    
    //calculate miles per gallon and output
    mpg = miles/gallons;
    cout << "MPG is " << mpg;
    
    return 0;
    
}