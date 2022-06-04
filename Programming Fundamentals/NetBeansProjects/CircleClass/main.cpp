/*
 * Anthony Narlock
 * Circle Class
 * 
 * Write a Circle class.
 */

#include <iostream>
using namespace std;

class Circle {
private:
    //Attributes of circle
    double radius;
    double pi = 3.14159;
public:
    //default constructor
    Circle();
    
    //Overloaded constructor that accepts radius and initialized radius
    Circle(double r);
    
    //setter member functions/methods
    double setRadius(double r);
    
    //getter functions/methods
    double getRadius() const;
    double getArea() const;
    double getDiameter() const;
    double getCircumference() const;
    
};

//Default constructor
Circle::Circle() {
    radius = 0;
}

//Overloaded constructor
Circle::Circle(double r) {
    if(r <= 0) {
        cout << "Radius must be greater than  or equal to zero.\n";
    } else {
        radius = r;
    }
}

//setter function for radius
double Circle::setRadius(double r) {
    if(r <= 0) {
        cout << "Radius must be greater than  or equal to zero.\n";
    } else {
        radius = r;
    }
}

//getter function for radius
double Circle::getRadius() const{
    return radius;
}

//getter function for area
double Circle::getArea() const{
    return pi * radius * radius;
}

//getter function for diameter
double Circle::getDiameter() const{
    return radius * 2;
}

//getter function for circumference
double Circle::getCircumference() const{
    return 2 * pi * radius;
}

int main()
{   
    double radius;  // To hold a radius
    
    // Get the radius.
    cout << "Enter the circle's radius: ";
    cin >> radius;
   
    // Create a Circle object with the 
    // specified radius.
    Circle c(radius);
   
    // Display the circle's data.
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area : " << c.getArea() << endl;
    cout << "Diameter: " << c.getDiameter() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;
    return 0;
}