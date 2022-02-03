/*
 * The Circle ADT models a circle allowing the use to get the
 * Diameter, Circumference and Area of the circle.
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>
#include <string>

template<class DataType>
class Circle {

private:
    DataType radius;         // Holds the circle radius


public:
    class NegativeCircleError {
    public:
        std::string getMessage() {
            return "Can't have a negative radius!!!!";
        }
    };

    Circle(DataType radius);

    // getters
    DataType getRadius() const;
    DataType getDiameter() const;
    double getCircumference() const;
    double getArea() const;


    // Setters
    void setRadius(const DataType radius);


    // operator overloading
    bool operator<(Circle<DataType> &rhs) const;
    bool operator>=(Circle<DataType> &rhs) const;

    Circle<DataType> operator+(Circle<DataType> &rhs) const;

};


#endif //CIRCLE_H
