/*
 * Class Activity - cmath and randoms
 * use cmath pow function to print out the value of 2 raised to the 5th power
 * use cmath abs function to print out the absolute value of -10
 * print out the max random value - use the constant RAND_MAX
 * Create a seed using
 *      unsigned seed = time(0) 
 * use rand() function to 
 */

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    
    cout << "Print out the value of 2 rasied to the 5th power: pow(2,5): "
            << pow(2,5) << endl;
    cout << "Print out the absolute value of -10: abs(-10): "
            << abs(-10) << endl;
    
    //cout << RAND_MAX << endl;
    
    cout << "Print out a random whole number between 40 and 92 inclusive: ";
    int max = 92, min = 40, x;
    unsigned int seed = time(0);
    srand(seed);
    x = (rand() % (max-min+1)) + min;
    cout << x << endl;
    
    cout << "Print out the result of a rolling a 20 sided die: ";
    int max1 = 20, min1 = 1, x1;
    x1 = (rand() % (max1-min1+1)) + min1;
    cout << x1 << endl;
            
    cout << "Print a random number which will represent one of 52 cards in as standard playing card deck: ";
    int max2 = 52, min2 = 1, x2;
    x2 = (rand() % (max2-min2+1)) + min2;
    cout << x2 << endl;
           
    int max3,min3,x3;
    cout << "Print a random number between 2 values read from the user: \n";
    cout << "What is max, min?: ";
    cin >> max3 >> min3;
    x3 = (rand() % (max3-min3+1)) + min3;
    cout << x3 << endl;        
            
    return 0;
}

