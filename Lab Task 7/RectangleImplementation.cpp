#include <iostream>
#include "Exercise.h"
using namespace std;

//class implementation 

Rectangle :: Rectangle(){
    length = 0;
    width = 0;
}

Rectangle :: Rectangle(double l, double w){
    length = l;
    width = w;
}

//accessor method for assigning  values 
void Rectangle :: setLength(double l){
    length = l;
} 
void Rectangle :: setWidth(double w){
    width = w;
}

//accessor method for retrieving  values 
double Rectangle :: getLength(){
    return length;
}
double Rectangle :: getWidth(){
    return width;
}

//method for calculating area
double Rectangle :: getArea(){
    return length * width;
}



