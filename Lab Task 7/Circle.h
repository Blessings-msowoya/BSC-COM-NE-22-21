// Circle.h
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

namespace shapes {

    class Circle {
        double Radius;

    public:
        // Constructor
        Circle();

        // Overloaded constructor
        Circle(double R);

        // Getter method
        double getRadius() const;

        // Setter method
        void setRadius(double R);

        // Destructor (optional)
        //~Circle();
    };

} 
#endif
