#include <iostream>
using namespace std;


int main(){
    string stringElements[8] = 
    {
        "B123","C234","A345","C15",
        "B177","G3003","C235","B179"
    };

    int ArraySize = sizeof(stringElements) / sizeof(stringElements[0]);

    for (int i = 0 ; i < ArraySize ; i++ ){
        string element =  stringElements[i];

        for (int j = 0  ; j < 1 ; j++ ){
            if(element[j] == 'B'){
                cout << element << endl;
            }            
        }
    }
    return 0 ;
}