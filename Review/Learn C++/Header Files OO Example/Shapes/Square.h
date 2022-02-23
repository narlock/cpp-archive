#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include "Rectangle.h"

class Square : public Rectangle {
    private:
        float side;
    public:
        explicit Square(float s, const std::string &t="Square")
            : Rectangle(s, s, t), side(s) {}

        void print() const;
};

#endif