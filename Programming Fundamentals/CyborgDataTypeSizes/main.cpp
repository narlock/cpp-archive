/*
 * Purpose of this program is to output the sizes of the data types: 
 * char, int, float, double
 * 
 * By: Anthony Narlock
 */

# include <iostream>
using namespace std;

int main() {
    //output all sizes asked:
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    
    return 0;
}
