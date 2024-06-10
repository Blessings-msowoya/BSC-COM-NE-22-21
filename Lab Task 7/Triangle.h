// Triangle.h
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
namespace shapes {

    class Triangle {
        double Base;
        double Height;

    public:
        // Constructor
        Triangle();

        // Overloaded constructor
        Triangle(double B, double H);

        // Getter methods
        double getBase() const;
        double getHeight() const;

        // Setter methods
        void setBase(double B);
        void setHeight(double H);

        // Destructor (optional)
        //~Triangle();
    };

}
#endif
