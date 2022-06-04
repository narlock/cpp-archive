/* 
 * Areas of Rectangles
 * By: Anthony Narlock
 * 
 * The area of a rectangle is the rectangle's length times its width.
 * Write a program that asks for the length and width of two rectangles
 * The program should tell the user which rectangle has the greater area, 
 * or if the areas are the same.
 * 
 * Process:
 *          Declare variables
 *          Ask user for length and width of BOTH rectangles
 *          Calculate the area of both rectangles
 *          Create if arguments comparing both rectangles
 *          Output results of if statement
 */

#include <iostream>
using namespace std;

int main() {
    cout << "Areas of Rectangles\nBy: Anthony Narlock\n====================\n\n";
    
    //Declare variables
    double width1, height1, width2, height2, area1, area2;
    
    //Ask user for length and width of BOTH rectangles
    cout << "Enter the width of the first rectangle: ";
    cin >> width1;
    cout << "Enter the height of the first rectangle: ";
    cin >> height1;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;
    cout << "Enter the height of the second rectangle: ";
    cin >> height2;
    
    //Calculate area of both rectangles
    area1 = width1 * height1;
    area2 = width2 * height2;
    
    //Create if arguments comparing the two rectangles
    if(area1 > area2)
        cout << "The first rectangle has a greater area than the second.";
    else if (area2 > area1)
        cout << "The second rectangle has a greater area than the first.";
    else if (area1 = area2)
        cout << "Both rectangles have the same area.";
    
    return 0;
                
                
}



