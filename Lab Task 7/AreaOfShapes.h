

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

namespace shapes {

    class Area {
    public:
        // Static method to calculate the area of a square
        static double AreaOfSquare(const Square& S);

        // Static method to calculate the area of a triangle
        static double AreaOfTriangle(const Triangle& T);

        // Static method to calculate the area of a circle
        static double AreaOfCircle(const Circle& C);
    };

}
