#include <iostream>

using namespace std;

int main(){
    const int min{10};
    const int max{100};
    int num;
    
    
    cout << "Enter a number between " << min << " and " << max;
    cin >> num;
    
    if (num >= min){
        cout << "\n" << num << " is greater than or equals to " << min << endl;
        
    int diff(num - min);
        cout << num << " is " << diff << " greater than or equals to " << min << endl << endl; 
    }
    
    if (num <= max){
        cout << num << " is less than or equals to " << max << endl;
        
    int diff(max-num);
        cout << num << " is " << diff << " less than or equals to " << max << endl << endl; 
    }
    
    if (num >= min && num <= max){
        cout << num << " is in range " << endl;
        cout << "This means statements 1 and 2 display!!" << endl << endl;
    }
    
    if (num == min || num == max){
        cout << num << " is in range" << endl;
        cout << "This means all 4 statements display!!" << endl << endl;
    }
    return 0;
}
