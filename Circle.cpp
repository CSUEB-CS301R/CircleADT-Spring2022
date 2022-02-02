//
// Created by Paul Raupach on 2/1/22.
//

#include "Circle.h"

Circle::Circle(double radius) {
    this->radius = radius;
}

double Circle::getRadius() const {
    return this->radius;
}

void Circle::setRadius(const double radius) {
    Circle::radius = radius;
}

double Circle::getDiameter() const {
    double diameter = this->radius * 2;
    return diameter;
}

