/*
 * By: Anthony Narlock
 */

#include <iostream>
using namespace std;

int main () {
    
    int product = 1;
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    product = (num * 10);
    
    while(product < 100) {
        cout << "DEBUG: PRODUCT = " << product << " NUMBER = " << num << endl;
        cout << "Enter a number: ";
        cin >> num;
        
        product = product + (num * 10);   
    }
    
    cout << "The product is " << product;
    
    return 0;
    
}
