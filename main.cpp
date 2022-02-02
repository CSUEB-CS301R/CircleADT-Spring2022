#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
    Circle circle = Circle(10);

    cout << "circle.getRadius(): " << circle.getRadius() << endl;
    circle.setRadius(20);
    cout << "circle.getRadius(): " << circle.getRadius() << endl;
    cout << "circle.getDiameter(): " << circle.getDiameter() << endl;


    return 0;
}
