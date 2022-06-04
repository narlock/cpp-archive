/*
 * Boiling and Freezing point
 * By: Anthony Narlock
 * 
 * Write a C++ program that asks the user to enter a temperature and then shows all the substances that will freeze at that temperature and all that will boil at that temperature.
 * For example, if the user enters −20 the program should report that water will freeze and oxygen will boil at that temperature.
 * 
 * Process : Declare variables
 *           Ask user for temperature
 *           run temperature through if arguments of freezing
 *              print results
 *           run temperature through if arguments of boiling
 *              print results
 */

#include <iostream>
using namespace std;

int main() {
    //Declare variables
    int temp;
    
    //Ask user for temperature
    cout << "Enter temperature: ";
    cin >> temp;
    
    //IF arguments for freezing
    cout << "\n\nAt the temperature " << temp << " degrees Fahrenheit, the following will freeze: \n";
    if(temp > 32)
        cout << "None in the table.";
    
    if(temp <= 32 && temp <= -38 && temp <= -173 && temp <= -362) 
        cout << "Water, Mercury, Oxygen, & Ethyl Alcohol.";
    else if(temp <= 32 && temp <= -38 && temp <= -173)
        cout << "Water, Mercury, & Oxygen.";
    else if(temp <= 32 && temp <= -38)
        cout << "Water & Mercury";
    else if(temp <= 32)
        cout << "Water";
    
    //IF arguments for boiling
    cout << "\nThe following will boil: \n";
    if(temp < -306)
        cout << "None in the table.";
    
    if(temp >= -306 && temp >= 172 && temp >= 212 && temp >= 676)
        cout << "Water, Mercury, Oxygen, & Ethyl Alcohol.";
    else if(temp >= -306 && temp >= 172 && temp >= 212)
        cout << "Water, Oxygen, & Ethyl Alcohol.";
    else if(temp >= -306 && temp >= 172)
        cout << "Oxygen, Ethyl Alcohol.";
    else if(temp >= -306)
        cout << "Oxygen.";
    
    
    return 0;
        
            
     
    
}

