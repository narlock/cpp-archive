/*
 * Write a C++ program that computes Kinetic Energy. Prompt the user for the mass and velocity of an object. 
 * Calculate and output the Kinetic Energy.
 * 
 * By: Anthony Narlock
 * 
 * Process: Title program
 *          Declare variables
 *          Ask user for mass and velocity
 *          calculate the kinetic energy (using formula 1/2*mass*velocity^2)
 *          output kinetic energy
 */

#include <iostream>
using namespace std;

int main() {
    
    //Title Program
    cout << "Kinetic Energy Calculator" << endl;
    
    //Declare variables
    double mass, velocity, kinetic_energy;
    
    //Ask user for mass and velocity
    cout << "Enter the mass of the object: ";
    cin >> mass;
    
    cout << "Enter the velocity of the object: ";
    cin >> velocity;
    
    //calculate the kinetic energy
    kinetic_energy = (0.5 * mass) * (velocity * velocity);
    
    //output kinetic energy
    cout << "The kinetic energy is: " << kinetic_energy;
    
    return 0; 
    
}
