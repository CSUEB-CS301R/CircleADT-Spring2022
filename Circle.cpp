//
// Created by Paul Raupach on 2/1/22.
//

#include "Circle.h"

Circle::Circle(int radius) {
    this->radius = radius;
}

int Circle::getRadius() const {
    return this->radius;
}

void Circle::setRadius(const int radius) {
    Circle::radius = radius;
}

int Circle::getDiameter() const {
    double diameter = this->radius * 2;
    return diameter;
}

double Circle::getCircumference() const {
    return 2 * M_PI * radius ;
}

double Circle::getArea() const {
    return M_PI * radius * radius;
}

