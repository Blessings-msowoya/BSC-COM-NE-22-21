#include <iostream>
#include "AreaOfShapes.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

using namespace std;

// Function to check user input validity
void checkinput(double length){

    while (true) {
        // Check if input is a number
        if (cin.fail())
        {
            cin.clear(); // Clear error flags
            cin.ignore(100, '\n'); // Ignore any remaining characters in the input buffer
    
            cout << "Invalid input. Please enter a number: ";
            cin >> length; // Retry input
        }
        else if (length >= 1)
        {
            break; // Break loop if input is valid
        }
        else
        {
            cout << "Enter a number Greater than 0" << endl;
            cout << "ENTER : ";
            cin >> length; // Retry input
        }
    }
}

// Function to swap two values
void swap(double length, double width){

    if (width > length)
    {
        double temp = length;
        length = width;
        width = temp;    
    }
}

// Function to get dimension from user input
double getDimension(){

    double dimension;
    cout << "Enter Dimension(width or length) : ";
    cin >> dimension;
    checkinput(dimension); // Check input validity
    cout << "  " << endl;
    return dimension;
}

int main(){


    int choice;

    while (true){ 
        // Display menu options
        cout << "Choose the Following options : " << endl;
        cout << " " << endl;
        cout << "1. Calculate The Area Of a square" << endl;
        cout << "2. Calculate The Area Of a Triangle" << endl;
        cout << "3. Calculate The Area Of a  Circle " << endl;
        cout << "4. Quit "<< endl;
        cout << "ENTER : ";
        cin >>  choice; // Get user choice


        if (choice == 4)
        {
            cout << "Program exited " << endl;
            break; // Exit program
        }
        else if (choice == 1){

            // Create a Square object with user input dimension
            shapes::Square squareObject(getDimension());
            // Calculate area of square using AreaOfSquare function
            double area = shapes::Area::AreaOfSquare(squareObject);
            cout << "The area of the square is : " << area << endl;
        }
        else if (choice == 2){

            // Calculate the area of a triangle
            double num = getDimension();
            double num2 = getDimension();
            swap(num,num2);

            // Create a Triangle object with user input dimensions
            shapes::Triangle triangleObject(num,num2);
            // Calculate area of triangle using AreaOfTriangle function
            double area = shapes::Area::AreaOfTriangle(triangleObject);
            cout  << "The area of  a Triangle is : " << area << endl;            
        }
        else if (choice == 3){

            // Create a Circle object with user input dimension
            shapes::Circle circleObject(getDimension());
            // Calculate area of circle using AreaOfCircle function
            double area = shapes::Area::AreaOfCircle(circleObject);
            cout << "The area of a Circle is : " << area << endl;
        }
        else{
            checkinput(choice); // Validate user input for invalid choices
        }
    }
    return 0;
}
