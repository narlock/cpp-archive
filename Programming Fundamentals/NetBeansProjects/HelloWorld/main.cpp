#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello World\n";
    string a;
    cout << "Enter a: ";
    cin >> a;
    string b;
    cout << "Enter b: ";
    cin >> b;
    
    string c = a+b;
    cout << c;
    return 0;
}