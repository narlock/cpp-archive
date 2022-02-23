#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "Shape.h"

#define PI 3.14159

class Circle : public Shape {
    private:
        float radius;
    public:
    /**
     * NOTES:
     * The explicit keyword here prevents the compiler from making
     * an implicit conversation from float to Circle
     * 
     * The string parameter is passed as a constant reference as 
     * we should not be modifiying it in the function
     * 
     */
    explicit Circle(float r, const std::string &t="Circle")
        : Shape(t), radius(r) {}

    /**
     * NOTES:
     * The const identifier indicates that these functions will not
     * modify the state of the object when they were called.
     * 
     * The area and perimeter methods are marked with the override
     * identifier since they override functions from the base class
     */
    float area() const override;
    float perimeter() const override;

    /**
     * print is NOT marked with the override identifier since print is
     * a non-virtual method in the base class
     */ 
    void print() const;
};

#endif