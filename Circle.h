//
// Created by Paul Raupach on 2/1/22.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>

class Circle {
private:
    double radius;


public:
    Circle(double radius);

    // getters
    double getRadius() const;
    double getDiameter() const;
    double getCircumference() const;
    double getArea() const;


    // Setters
    void setRadius(const double radius);


};


#endif //CIRCLE_H
