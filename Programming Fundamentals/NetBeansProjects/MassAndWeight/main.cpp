/*
 * Mass and Weight
 * By: Anthony Narlock
 * 
 * Scientists measure an object's mass in kilograms and its weight in newtons. If you know
 * the amount of mass that an object has, you can calculate its weight, in newtons, with
 * the following formula: weight = mass * 9.8
 * 
 * Write a program that asks the user to enter an object's mass, and then calculates and displays
 * its weight. If the object weighs more than 1,000 newtons, display a message indicating that
 * it is too heavy. If the object weighs less than 10 newtons, display a message indicating that 
 * the object is too light.
 * 
 * Process:     Declare variables
 *              Prompt user to enter in mass
 *              Calculate the weigh of the object
 *              Create if arguments for final output
 */

#include <iostream>
using namespace std;

int main() {
    cout << "Mass and Weight\nBy: Anthony Narlock\n====================\n\n";
    
    //Declare variables
    double mass, weight;
    const double GRAVITY = 9.8;
    
    //Prompt user to enter in mass
    cout << "Enter the mass: ";
    cin >> mass;
    
    //Calculate the weight of the object
    weight = mass * GRAVITY;
    
    //Displays weight
    cout << "Weight of object: " << weight << endl;
    
    //Create if arguments for final output
    if(weight >= 1000) {
        cout << "The object is too heavy.";
    }
    
    if(weight <= 10) {
        cout << "The object is too light.";
    }
    
    return 0;
}

