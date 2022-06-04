/*
 * Pointer class activity.
 */

#include <iostream>

using namespace std;

int main() {
    int     a = 0;
    int     b = 0;
    int     *p1 = &a;
    int     *p2 = &b;
    
    cout << boolalpha; // print Boolean expressions as "true" or "false"

    cout << "Is a == b     : " << (a == b) << endl;
    cout << "Is p1 == p2   : " << (p1 == p2) << endl;
    cout << "Is *p1 == *p2 : " << (*p1 == *p2) << endl;
    
    cout << "\nActivity 1: " << endl;
    b = 1;
    cout << "Is a == b      : " << (a == b) << endl;
    cout << "Is p1 == p2    : " << (p1 == p2) << endl;
    cout << "Is *p1 == *p2 : " << (*p1 == *p2) << endl;
    
    cout << "\nActivity 2: " << endl;    
    p2 = &a;
    
    cout << "Is a == b      : " << (a == b) << endl;
    cout << "Is p1 == p2    : " << (p1 == p2) << endl;
    cout << "Is *p1 == *p2 : " << (*p1 == *p2) << endl;
    
    cout << "\nActivity 3: " << endl;
    b = 0;
    cout << "Is a == b      : " << (a == b) << endl;
    cout << "Is p1 == p2    : " << (p1 == p2) << endl;
    cout << "Is *p1 == *p2 : " << (*p1 == *p2) << endl;
}

/*
Original version of this program has four initialization statements:
    int     a = 0;
    int     b = 0;
    int     *p1 = &a;
    int     *p2 = &b;
    
Output of original version of the program:
    Is a == b     : true
    Is p1 == p2   : false
    Is *p1 == *p2 : true

You ARE allowed to change any of the initialization statements.

You are not allowed to put p1 or p2 on the right hand side of the 
equal sign. You are not allowed to change the output statements.

Activity 1: Change the program to produce the following:
    Is a == b     : false
    Is p1 == p2   : false
    Is *p1 == *p2 : false

Activity 2: Change the program to produce the following:
    Is a == b     : false
    Is p1 == p2   : true
    Is *p1 == *p2 : true

Activity 3: Change the program to produce the following:
    Is a == b     : true
    Is p1 == p2   : true
    Is *p1 == *p2 : true
*/
