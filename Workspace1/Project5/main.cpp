#include <iostream>

using namespace std;

int main(){
    
    bool has_car {};
    const int driving_age{16};
    int n {};
    
    if(driving_age >= 16)
        if(has_car){
            cout << "Yes - you can drive!" << endl;
        else
            cout << "You need to buy a car of your own first" << endl;
        }
        else 
            cout << "You can start driving in" << driving_age - n << "years." << endl;
            
    }