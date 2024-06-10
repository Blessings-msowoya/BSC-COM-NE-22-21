
#include "AreaOfShapes.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

namespace shapes {
   

    double Area::AreaOfSquare(const Square& S) {
        return S.getSideLength() * S.getSideLength();
    }

    double Area::AreaOfTriangle(const Triangle& T) {
        return 0.5 * T.getBase() * T.getHeight();
    }

    double Area::AreaOfCircle(const Circle& C) {
        return 3.14 * C.getRadius() * C.getRadius();
    }

} 
