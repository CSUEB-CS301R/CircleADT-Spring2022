//
// Created by Paul Raupach on 2/1/22.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>

class Circle {
private:
    int radius;


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
