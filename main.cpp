#include <iostream>
#include <cassert>
#include "Circle.h"
#include "Circle.cpp"

using namespace std;

int main() {
    Circle<int> circle = Circle<int>(10);

    cout << "circle.getRadius(): " << circle.getRadius() << endl;
    circle.setRadius(20);
    cout << "circle.getRadius(): " << circle.getRadius() << endl;
    cout << "circle.getDiameter(): " << circle.getDiameter() << endl;

    circle.setRadius(10);

    cout << "Radius should be 15 and is " << circle.getRadius() << endl;
    assert(10 == circle.getRadius());

    cout << "Diameter should be 20 and is " << circle.getDiameter() << endl;
    assert(20 == circle.getDiameter());

//    cout << ".1 + .1 + .1 == .3: " << (.1 + .1 + .1) << endl;
//    assert(.1 + .1 + .1 == .3);

    cout << "Circumference should be ~62.8318 and is " << circle.getCircumference() << endl;
    assert(62.8318 < circle.getCircumference());
    assert(62.8319 > circle.getCircumference());

    cout << "Area should be ~314.1592 and is " << circle.getArea() << endl;
    assert(314.1592 < circle.getArea());
    assert(314.1593 > circle.getArea());

    Circle<double> *preciseCircle = new Circle<double>(50.75);
    cout << "Diameter should be ~101.5 and is " << preciseCircle->getDiameter() << endl;
    assert(101.5 <= preciseCircle->getDiameter());
    assert(101.55 > preciseCircle->getDiameter());

    Circle<float> *invertedCircle;
    try {
        invertedCircle = new Circle<float>(7.5);
        cout << "This code ran." << endl;
    } catch ( Circle<float>::NegativeCircleError error) {

        cout << error.getMessage() << endl;
    }


    Circle<double> largeCircle = Circle<double>(900);
    Circle<double> smallCircle = Circle<double>(.09);

    if (smallCircle < largeCircle) {
        cout << "small is smaller than large" << endl;
    } else {
        cout << "large is smaller than small" << endl;
    }
    assert(smallCircle < largeCircle);

    Circle<double> sumCircle = smallCircle + largeCircle;

    cout << "sumCircle " << sumCircle.getRadius() << endl;

    cout << "after try/catch " << endl;
    return 0;
}
