#include <iostream>
#include "Exercise.h"
using namespace std;

void checkinput(double length){

    while (cin.fail()) {
        cin.clear();
        cin.ignore(100, '\n');
    
        cout << "Invalid input. Please enter a number: ";
        cin >> length;
    }
}

double getDimension(){

    double dimension;
    cout << "Enter Dimension(width or length) : ";
    cin >> dimension;
    checkinput(dimension);
    cout << "  " << endl;
    return dimension;

}

void swap(double length, double width){

    if (width > length)
    {
        double temp = length;
        length = width;
        width = temp;    
    }
}

int main() {
    Rectangle Object1;

    double num = getDimension();
    double num2 = getDimension();

    swap(num,num2);

    Object1.setLength(num);
    Object1.setWidth(num2);


    cout << "the length is : " << Object1.getLength() << endl;
    cout << "the width is  : " << Object1.getWidth() << endl;
    cout << "the Area is   : " << Object1.getArea() << endl;
    cout << "  " << endl;


    cout << "Initialisation of an object" << endl;


    num = getDimension();
    num2 = getDimension();

    swap(num,num2);

    Rectangle Object2(num, num2);
    
    cout << "the length is : " << Object2.getLength() << endl;
    cout << "the width is  : " << Object2.getWidth() << endl;
    cout << "the Area is   : " << Object2.getArea() << endl;
    return 0; 
}