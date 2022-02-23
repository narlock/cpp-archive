#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include "Shape.h"

class Triangle : public Shape {
    private:
        float base;
        float height;
    public:
        Triangle(float b, float h, const std::string &t="Triangle")
            : Shape(t), base(b), height(h) {}

        float area() const override;
        float perimeter() const override;
        void print() const;

        /**
         * Notice that there is no implementation of the printType method.
         * Because it is a virtual method, we can just use how it is
         * implemented in Shape. We would not be able to do this if it was
         * pure virtual.
         */
};

#endif