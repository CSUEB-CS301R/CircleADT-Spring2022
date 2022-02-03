
#include "Circle.h"

// Circle constructor
Circle::Circle(int radius) {
    this->radius = radius;
}

// Returns the Radius of the circle
int Circle::getRadius() const {
    return this->radius;
}
// Sets the Radius of the circle
void Circle::setRadius(const int radius) {
    this->radius = radius;
}
// Returns the Diameter of the circle
int Circle::getDiameter() const {
    double diameter = this->radius * 2;
    return diameter;
}

// Returns the Circumference of the circle
double Circle::getCircumference() const {
    return 2 * M_PI * radius ;
}
// Returns the Area of the circle
double Circle::getArea() const {
    return M_PI * radius * radius;
}

