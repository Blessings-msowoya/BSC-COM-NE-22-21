// Circle.cpp

#include "Circle.h"

namespace shapes {

    // Default constructor
    Circle::Circle() {
        Radius = 0.0; // Default radius
    }

    // Overloaded constructor
    Circle::Circle(double R) {
        Radius = R;
    }

    // Getter method
    double Circle::getRadius() const {
        return Radius;
    }

    // Setter method
    void Circle::setRadius(double R) {
        Radius = R;
    }

    // Destructor (optional)
    // Circle::~Circle() {


}
