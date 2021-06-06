/*
 * Class Activity - Evaluating Expressions like C++
 * By: Anthony Narlock
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int result1,result2,result6,result7,result9,result10;
    double result3,result4,result5, result8;
    
    result1 = 4+7;
    cout << result1 << endl;
    result2 = 5*8;
    cout << result2 << endl;
    result3 = 2*6.21;
    cout << result3 << endl;
    result4 = 13.61-4;
    cout << result4 << endl;
    result5 = 7+2.59;
    cout << result5 << endl;
    result6 = 8-4*2+6/3;
    cout << result6 << endl;
    result7 = (8-4)*(2+6)/3;
    cout << result7 << endl;
    result8 = 17/3-4;
    cout << result8 << endl;
    result9 = (12-6)*3+8/2;
    cout << result9 << endl;
    result10 = 5%2;
    cout << result10 << endl;
    
    string result11 = "Hello World!";
    cout << result11 << endl;
    string result12 = "He said, \"Hello World\".";
    cout << result12 << endl;
    
}

