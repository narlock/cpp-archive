#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "Shape.h"

class Rectangle : public Shape {
    protected:
        float length;
        float width;
    public:
        Rectangle(float l, float w, const std::string &t="Rectangle") 
        : Shape(t), length(l), width(w) {}
        //Parent class Shape(t) sets the type

        //Overriding every method in the shape class
        //All const means is that the method is not intended to change the state of the object
        float area() const override;
        float perimeter() const override;

        void print() const; //Since this is non virtual, we aren't overriding
        void printType() const override;
};

#endif