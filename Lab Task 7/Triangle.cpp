// Triangle.cpp

#include "Triangle.h"

namespace shapes {

    // Default constructor
    Triangle::Triangle() {
        Base = 0.0; // Default base length
        Height = 0.0; // Default height
    }

    // Overloaded constructor
    Triangle::Triangle(double B, double H) {
        Base = B;
        Height = H;
    }

    // Getter methods
    double Triangle::getBase() const {
        return Base;
    }

    double Triangle::getHeight() const {
        return Height;
    }

    // Setter methods
    void Triangle::setBase(double B) {
        Base = B;
    }

    void Triangle::setHeight(double H) {
        Height = H;
    }

    // Destructor (optional)
    // Triangle::~Triangle() {
    //     // Destructor implementation
    // }

}
