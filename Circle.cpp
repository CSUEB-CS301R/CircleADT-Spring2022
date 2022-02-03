
#include "Circle.h"

// Circle constructor
template<class DataType>
Circle<DataType>::Circle(DataType radius) {
    if (radius < 0 ) {
        throw NegativeCircleError();
    }
    this->radius = radius;
}

// Returns the Radius of the circle
template<class DataType>
DataType Circle<DataType>::getRadius() const {
    return this->radius;
}
// Sets the Radius of the circle
template<class DataType>
void Circle<DataType>::setRadius(const DataType radius) {
    if (radius < 0 ) {throw NegativeCircleError();}

    this->radius = radius;
}
// Returns the Diameter of the circle
template<class DataType>
DataType Circle<DataType>::getDiameter() const {
    double diameter = this->radius * 2;
    return diameter;
}

// Returns the Circumference of the circle
template<class DataType>
double Circle<DataType>::getCircumference() const {
    return 2 * M_PI * radius ;
}
// Returns the Area of the circle
template<class DataType>
double Circle<DataType>::getArea() const {
    return M_PI * radius * radius;
}

template<class DataType>
Circle<DataType> Circle<DataType>::operator+(Circle<DataType> &rhs) const {
    return Circle<DataType>(this->radius + rhs.radius);
}

template<class DataType>
bool Circle<DataType>::operator<(Circle<DataType> &rhs) const {
    bool isSmaller = this->getRadius() < rhs.getRadius();
    return isSmaller;
}

template<class DataType>
bool Circle<DataType>::operator>=(Circle<DataType> &rhs) const {
    return !(this < rhs);
}

