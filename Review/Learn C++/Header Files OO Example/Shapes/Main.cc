#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"

using namespace std;

int main() {
    Rectangle r(7,5);
    Triangle t(3, 5);
    Circle c(4);
    Square q(8);

    Shape * sArray[] = {
                        new Rectangle(4, 9),
                        new Circle(5),
                        new Triangle(13,8),
                        new Rectangle(10, 4),
                        new Circle(7),
                        new Triangle(3,6),
                        new Square(1),
                        new Square(3)
                        };

    cout << "Rectangle variable r: " << endl;
    r.print();
    r.printType();
    cout << "area=" << r.area() << " perimeter=" << r.perimeter() << endl;

    cout << endl << "Triangle variable t: " << endl;
    t.print();
    t.printType();
    cout << "area=" << t.area() << " perimeter=" << t.perimeter() << endl;

    cout << endl << "Circle variable c: " << endl;
    c.print();
    c.printType();
    cout << "area=" << c.area() << " perimeter=" << c.perimeter() << endl;

    cout << endl << "Square variable q: " << endl;
    q.print();
    q.printType();
    cout << "area=" << q.area() << " perimeter=" << q.perimeter() << endl;

    cout << endl << "Shape* array sArray:" << endl;
    for (const Shape * s : sArray) {
        s->printType();
        cout << "  ";
        s->print();
        cout << " area=" << s->area() << " perimeter=" << s->perimeter() << endl;
    }

    for(const Shape * s : sArray) {
        delete s;
    }


    return 0;
}