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
#include <fstream>
#include <string>
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
    //Declare constant for gravity
    const double GRAVITY = 9.8;
    return pow(time,2) * (GRAVITY / 2);
}

/*
 * Function: main
 * Summary: outputs an integer value 1-10, then calls function fallingDistance, then returns the distance in meters.
 * Parameters: none
 * Returns: outputted solution, returns integer when complete
 * Preconditions: none
 * Postconditions: reads file seconds.txt, then writes the fallingDistance onto a file called distances.txt
 *          
 */

int main() {
    //Declare variables, including ifstream and ofstream to be able to read and write files
    int num;
    ifstream inFile;
    ofstream outFile;
    string file = "distances.txt";
    
    //open seconds file
    inFile.open("seconds.txt");
    if(inFile.fail()) {
        cout << "An unexpected error occurred: inFile.open()\n";
        return 10;
    }
    
    //open distance file
    outFile.open(file);
    if(outFile.fail()) {
        cout << "An unexpected error occurred: outFile.open()\n";
        return 10;
    }
    
    //create while statement to cycle through seconds and write to distances
    while(inFile >> num) {
        outFile << num << setw(15) << setprecision(2) << right << fixed << fallingDistance(num) << " meters" << endl;
    }
    
    //close files
    inFile.close();
    outFile.close();
    
    return 0;
}
