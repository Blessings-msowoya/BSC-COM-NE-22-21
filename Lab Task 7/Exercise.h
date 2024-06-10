#include <iostream>
using  namespace std;
class Rectangle{
    double length;
    double width;
    public:
    //constructor 
    Rectangle();
    //destructor

    Rectangle(double l, double w);
    //~Rectangle();

   
    //setter method 
    void setLength(double);
    void setWidth(double);

    //getter method
    double getLength();

    double getWidth();

    //other methods
    double getArea();

};