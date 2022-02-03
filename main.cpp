#include <iostream>
#include <cassert>
#include "Circle.h"

using namespace std;

int main() {
    Circle circle = Circle(10);

    cout << "circle.getRadius(): " << circle.getRadius() << endl;
    circle.setRadius(20);
    cout << "circle.getRadius(): " << circle.getRadius() << endl;
    cout << "circle.getDiameter(): " << circle.getDiameter() << endl;

    circle.setRadius(10);

    cout << "Radius should be 10 and is " << circle.getRadius() << endl;
    assert(10 == circle.getRadius());

    cout << "Diameter should be 20 and is " << circle.getDiameter() << endl;
    assert(20 == circle.getDiameter());

    cout << "Circumference should be ~62.8318 and is " << circle.getCircumference() << endl;
    assert(62.8318 < circle.getCircumference());
    assert(62.8319 > circle.getCircumference());

    cout << "Area should be ~314.1592 and is " << circle.getArea() << endl;
    assert(314.1592 < circle.getArea());
    assert(314.1593 > circle.getArea());

    return 0;
}
