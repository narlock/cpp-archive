/*
 * Class Activity - While Loops
 * By: Anthony Narlock
 */

#include <iostream>
using namespace std;

int main() {
    cout << "Enter 0 to quit\n";
    
    int number;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    
    while(number != 0) {
        sum += number;
        cout << "Enter a number: ";
        cin >> number;
        
    }
        cout << "The sum is: " << sum;
    
    return 0;
    
}