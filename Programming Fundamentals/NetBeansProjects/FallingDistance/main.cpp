/* 
 * Falling Distance
 * By: Anthony Narlock
 * 
 * When an object is falling because of gravity, the following formula can be used to determine the distance the object falls in a specific time period.
 * d = (1/2) * g * (t)^2
 * 
 * The variables in the formula are as follows: d is the distance in  meters, g is 9.8, and t is the amount of time, in seconds, that the object has been falling.
 * 
 * Write a function named fallingDistance that accepts an object's falling time (in seconds) as an argument. The function should return the distance, in meters, that
 * the object has fallen during that time interval.
 * 
 * Write a program that demonstrates the function by calling it in a loop that passes the values 1 through 10 as arguments and displays the return value.
 * 
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
 * Function: fallingDistance
 * Summary: Accepts an objects falling time, and then returns the falling distance
 * Parameters: integer time
 * Returns: double- contains the calculated falling distance
 * Preconditions: none
 * Postconditions: returns a double a double based on kinematic equation
 *          
 */

double fallingDistance(int time) {
    //Declare constant for gravity, as asked for
    const double GRAVITY = 9.8;
    return pow(time,2) * (GRAVITY / 2);
}

/*
 * Function: main
 * Summary: outputs an integer value 1-10, then calls function fallingDistance, then returns the distance in meters.
 * Parameters: none
 * Returns: outputs falling distance through loop, returns integer to show its completed.
 * Preconditions: none
 * Postconditions: for loop that specifies seconds 1-10.
 *          
 */

int main() {
    
    cout << "Seconds\t\tDistance\n------------------------\n";
    //For loop to cycle through 1-10, and display numbers accordingly
    for(int i = 1; i <= 10; i++) {
        cout << i << setw(15) << setprecision(2) << right << fixed << fallingDistance(i) << " meters" << endl;
    }
    
    return 0;
}
