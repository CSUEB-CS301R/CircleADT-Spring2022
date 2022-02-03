/*
 * The Circle ADT models a circle allowing the use to get the
 * Diameter, Circumference and Area of the circle.
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>

class Circle {
private:
    int radius;         // Holds the circle radius


public:
    Circle(int radius);

    // getters
    int getRadius() const;
    int getDiameter() const;
    double getCircumference() const;
    double getArea() const;


    // Setters
    void setRadius(const int radius);


};


#endif //CIRCLE_H
