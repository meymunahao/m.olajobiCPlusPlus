#include <iostream>

//Solution 2: using modulo opertor
using namespace std;

int main(){
    cout << "Kindly input a value in cents: " << endl;
    double cents {0.0};
    cin >> cents;
    
    const double dollar {100.0};
    const double quarter {25.0};
    const double dime {10.0};
    const double nickel {5.0};
    const double penny {1.0};
    
    int change{0}, dollars{0}, quarters{0}, dimes{0}, nickels{0}, pennies{0};
    
    dollars = cents/dollar;
    change = cents % (dollars*dollar);
    
    quarters = change/quarter;
    //change = cents - (quarters*quarter);
    change %= (quarters*quarter);
    
    dimes = change/dime;
    //change = change - (dimes*dime);
    change %= (dimes*dime); 
    
    nickels = change/nickel;
    //change = change - (nickels*nickel);
    change %= (nickels*nickel);
    
    pennies = change/penny;
    //change = change - (pennies*penny);
    change %= (pennies*penny);

    cout << "You can provide this change of " << cents << "cents as follows:"<<  endl;
    cout << "Dollars: " << dollars  << endl;
    cout << "Quarter: " << quarters  << endl;
    cout << "Dimes: " << dimes  << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
    
    return 0;
}