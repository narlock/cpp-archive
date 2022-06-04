#include <iostream>
#include <string>
using namespace std;

int main() {
    
    const int SIZE = 4;
    string courses[] = {"Intro to Python", "Programming Fundamentals", "OO Programming", "Data Structures and Algorithms"};
    
    
    for(int i = 0; i < SIZE; i++) {
        cout << courses[i] << endl;
    }
    
    courses[0] = "Introduction to Python";
    cout << courses[0] << endl;
    
    courses[2] = "Object Oriented Programming";
    cout << courses[2] << endl;
            
    return 0;
}