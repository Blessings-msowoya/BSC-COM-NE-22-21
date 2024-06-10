// Square.h
#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {

    class Square {
        double sideLength;
    public:
        // Setter method
        void setSideLength(double S);
        
        // Getter method
        double getSideLength() const;
        
        // Constructor
        Square();
        
        // Overload constructor
        Square(double S);
        
        // Destructor (optional)
        //~Square();
    };

} 
#endif
