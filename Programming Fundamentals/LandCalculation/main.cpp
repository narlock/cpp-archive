/*
 * PLEASE READ: Spoke to you after class on 9/4, we agreed that it was okay if I used the cin function.
 * 
 * 
 * LandCalculation - Assignment 2 - First Programs
 * The purpose of this program is to calculate the number of acres in a tract of land.
 * By: Anthony Narlock
 */
# include <iostream>
using namespace std;

int main() {
    // Title of Program
    cout << "Land Calculation" << endl;
    //491243
    
    //Define variables
    const int SQ_FT_PER_ACRE = 43560;
	double acres, feet;
    
    //Get amount of acres
    cout << "Enter the amount of feet to calculate: ";
    cin >> feet;
    cout << feet << endl;
    
    //Calculate conversion
    acres = feet / SQ_FT_PER_ACRE;
    
    //final output
    cout << "The number of acres in " << feet << " square feet is " << acres;
    
    return 0;
    
}

