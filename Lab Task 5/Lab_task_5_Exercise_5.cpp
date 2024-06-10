#include <iostream>
#include <limits>
using namespace std;

double areaOfTriangle (double height, double base){
    return 0.5 * height * base;
};

double calculateArea  (double length, double width){
    return   length * width;

};
double calculateArea (double length){
    return length * length;

};
int main() {
    
     double height, base, length, width;
     int userInput;

    while (true){
        cout << " " << endl;
        cout << "Please Select the area of the shape to Calculate"<< endl;
        cout << "1. Area of Square" << endl;
        cout << "2. Area of Rectangle" << endl;
        cout << "3. Area of  Triangle" << endl;
        cout << "4. Quite program " << endl;
        cout << " " << endl;
        cout << "Enter Selection: ";
        cin >> userInput;
        cout << endl;   

        if (userInput >= 1 && userInput <= 4 ){

            if(userInput == 4 ){     
                break; // exit program

            }else if (userInput == 1 ){ // calculate area of square
               
                cout << "enter the length of  Square: ";
                cin >> length;
                cout << endl;


                double area = calculateArea(length);
                cout << "The area of the square is: " << area << endl;
                

            }else if (userInput ==  2){
                //calculate area of  triangle
                cout << "enter the length of  Rectangle: ";
                cin >> length;
                cout << endl;

                cout << "enter the width of  Rectangle: ";
                cin >> width;
                cout << endl;

                double area = calculateArea(length,width);
                cout << "The area of the Rectangle is: " << area << endl;
                

            }else if (userInput == 3 ){

                cout << "enter the height of Triangle: ";
                cin >> height;
                cout << endl;

                cout << "enter the base of  Triangle: ";
                cin >> base;
                cout << endl;

                double area = areaOfTriangle(height,base);
                cout << "The area of the Triangle  is: " << area << endl;               
            }   

        }else{
            cout << "invalid input " << userInput << endl; 
            cout << "Please enter a number between 1 and 4 " << endl;
            // Clear input buffer to handle out-of-range input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
        }
    }

    return 0; 
}