#include <iostream>
#include <vector>
using namespace std;
int main(){
    /*for(int i = 1; i<=100; i++){
        cout << i;
        if(i % 10 == 0)
            cout << endl;
        else 
            cout << " "; // using the if- else operator
       }*/
       
      for(int i = 1; i<=100; i++){
       cout << i <<  ((i % 10==0) ? "\n" : " ") ; // using the conditional operator
      } 
      
    vector<int> nums {10, 20, 30, 40, 50};
    for( unsigned i {0}; i< nums.size(); i++)
        cout << nums[i] << endl;
    cout << endl;
    return 0;
}