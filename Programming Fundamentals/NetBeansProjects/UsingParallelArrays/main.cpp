#include <iostream>
#include <string>

using namespace std;

int main() {
    const int SIZE = 4;
    string CScourseNames[] = {"Intro to Python","Programming Fundamentals","Object Oriented Programming","Data Structures and Algorithms"};
    string CScourseID[] = {"1060","1081","1082","2082"};
    
    for(int i = 0; i < SIZE; i++) {
        cout << "Course name for element #" << i+1 << ": " << CScourseNames[i] << endl;
    }
    
    for(int i = 0; i < SIZE; i++) {
        cout << "Course ID for element #" << i+1 << ": " << CScourseID[i] << endl;
    }
    
    bool CSfall19Offerings[] = {true,true,true,true};
    bool CSspring19Offerings[] = {true,true,true,false};
    
    cout << "\nCourse Information\n--------------------\n";
    for(int i = 0; i < SIZE; i++) {
        cout << "ID: " << CScourseID[i] << " - " << CScourseNames[i] << endl;
        cout << "Fall: " << CSfall19Offerings[i] << endl;
        cout << "Spring: " << CSspring19Offerings[i] << endl;
    }
            
    return 0;
}