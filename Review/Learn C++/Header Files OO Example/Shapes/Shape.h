#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape {
    protected:
        std::string type;

    public:
        ///Shape constructor takes in a type
        ///Takes in a string reference
        Shape(const std::string &t="Shape") : type(t) {}

        ///Destructor
        virtual ~Shape() {}

        /**
         * Print is a non-virtual method
         */ 
        void print() const { std::cout << "I am a shape" << std::endl; }

        /**
         * PrintType is a virtual method
         */
        virtual void printType() const { std::cout << "SHAPE: " << type << std::endl; }

        /**
         * The following are Pure Virtual (abstract) methods
         * Any class that derives Shape will have to implement this unlesss it will be abstract as well
         */ 
        virtual float area() const = 0;
        virtual float perimeter() const = 0;
};

#endif