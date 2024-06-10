#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    //generate random number between 0 and 11 t
    int daysUntilExpiration;
    srand(time(NULL));
    daysUntilExpiration = rand() % 12 ;
    cout << daysUntilExpiration << endl;
    
    switch(daysUntilExpiration){

        case 0:
        cout << "Your subscription has expired." << endl;
        break;

        case 1:
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
        break;

        // case 5 or less than 5 
        case 2:
        case 3:
        case 4:
        case 5:
        cout << "Your subscription expires in " << daysUntilExpiration << " days" <<  endl;
        cout << "Renew now and save 10!" << endl;
        break;  

        // case  10 or less than 10 
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        cout << " Your subscription will expire soon. Renew now!" << endl;
        break;

        default:
        cout << "You have an active subscription" << endl;

    }

    return 0; 
}