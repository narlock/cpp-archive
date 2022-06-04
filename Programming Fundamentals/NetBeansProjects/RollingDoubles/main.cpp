/*
 * Rolling Doubles
 * By: Anthony Narlock
 * 
 * Write a program that simulates rolling two die. You will need to use random numbers for each dice roll. 
 * Keep rolling both die until they come up doubles. Your program should print the results of each die roll.
 * When doubles are rolled, your program should print "Doubles!"
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    //Declare variables, constants, and establish a random seed.
    int d1, d2, count = 1;
    const int MIN = 1, MAX = 6;
    unsigned int seed = time(0);
    srand(seed);
    
    //Calculate first roll
    d1 = (rand() % (MAX-MIN+1)) + MIN;
    d2 = (rand() % (MAX-MIN+1)) + MIN;
    cout << "Dice 1 Rolls a " << d1 << ", Dice 2 Rolls a " << d2 << endl;
    
    //If the first roll isn't a double, then continue to roll until doubles appear
    while(d1 != d2) {
         count++;
         d1 = (rand() % (MAX-MIN+1)) + MIN;
         d2 = (rand() % (MAX-MIN+1)) + MIN;
         cout << "Dice 1 Rolls a " << d1 << ", Dice 2 Rolls a " << d2 << endl;
         
    }
    
    //Final output - when doubles are hit.
    if(count != 1)
        cout << "Doubles! \nRolled doubles after " << count << " rolls." << endl;
    else
        cout << "Doubles! \nRolled doubles after " << count << " roll." << endl;
    
    return 0;
}
