/*
 * Math Tutor 
 * By: Anthony Narlock
 * 
 * Write a c++ program as per the specifications in chapter 3, programming challenge #17.
 * 
 * Write a program that can be used as a math tutor for a young student. The program should display two random numbers added
 * Define constants for the mininmum/maximum range of the numbers to add. The minimum/maximums should be 100-499.
 * 
 * 
 * Process:
 *          Create number variables, set max/min
 *          display rand numbers
 *          add numbers
 *          cin wait function when ready
 *          output answer
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Math Tutor\nBy: Anthony Narlock\n====================\n\n";
    
    //Declare variables, set min/max
    const int MAX = 499, MIN = 100;
    int num1, num2, answer;
    srand(time(0));
    num1 = (rand() % (MAX-MIN+1)) + MIN;
    num2 = (rand() % (MAX-MIN+1)) + MIN;
    
    //Display random numbers
    //cout << fixed << 
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-------\n";
    
    //Calculate total
    answer = num1 + num2;
    
    //cin wait, then display answer
    cout << "Press Enter to reveal answer: ";
    cin.get();
    cout << answer;
    
    return 0;
            
            
}

