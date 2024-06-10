// Square.cpp

#include "Square.h"

namespace shapes {

    // Default constructor
    Square::Square() {
        sideLength = 0.0; // Default side length
    }

    // Overloaded constructor
    Square::Square(double S) {
        sideLength = S;
    }

    // Getter method
    double Square::getSideLength() const {
        return sideLength;
    }

    // Setter method
    void Square::setSideLength(double S) {
        sideLength = S;
    }
}
