#include <iostream>
using namespace std;


int main () {
    cout << "Enter an integer value between 5 and 10" << endl;
    int number;
    cin >> number;

    //cout << "the number you have entered is " << number << endl; 

    bool count  = (number <= 5 && number >= 10);
    while (count){
        cout <<"Sorry, you have entered an invalid number, please try again" << endl;
        cin >> number;
    }
    return 0;
}