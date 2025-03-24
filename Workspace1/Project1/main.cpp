#include <iostream>
using namespace std;

//Naira to Dollars Conversion
int main(){
    
    const double dollar_per_naira{1474.62};
    
    cout << "Welcome to Muna's Naira to Dollar converter! " << endl;
    cout << "Enter the value in Naira: " << endl;
    
    double naira {0.0};
    double result{0.0};
    
    cin >> naira;
    result = naira * dollar_per_naira;
    
    cout << naira << " naira is equivalent to " << result << " dollars." << endl; 
    
    return 0;
    }

