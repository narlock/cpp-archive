/*
 * Class Activity - If statements
 * 
 * Anthony Narlock
 */

#include <iostream>
using namespace std;

int main() {
    //Delcare variables
    int choice;
    
    //Ask user what program they want
    cout << "Which program do you want? \n======================\n Type 1 for Area Calc \n Type 2 for test score \n====================== \n Enter:  ";
    cin >> choice;
    
    if(choice == 1) {
        //Area Calculator
        double length, width, area;
        cout << "\nArea Calculator with a rectangle \n==================";
        //Prompt for length and width, if length is <=0, then the will end and return code of 10 or 20.
        cout << "\nEnter Length: ";
        cin >> length;
        if(length <= 0) {
            cout << "\n Length must be greater than 0.";
            return 10;
        }
    
        cout << "\nEnter Width: ";
        cin >> width;
        if(width <= 0) {
            cout << "\n Width must be greater than 0.";
            return 20;
        }
    
        area = length * width;
        cout << "\nThe area is " << area << ".";
    }
    else if(choice == 2) {
        //Test Score validator
        cout << "\nTest Score Program \n================";
        double score;
        cout << "\nEnter the test score: ";
        cin >> score;
        
        if(score >= 0 && score <= 100) {
            cout << "test score is valid";
        }
        else {
            cout << "test score is not valid";
        }
    }

    return 0;
}