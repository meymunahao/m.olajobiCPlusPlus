#include <iostream>

/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
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
    change = cents - (dollars*dollar);
    
    quarters = change/quarter;
    //change = cents - (quarters*quarter);
    change -= (quarters*quarter);
    
    dimes = change/dime;
    //change = change - (dimes*dime);
    change -= (dimes*dime); 
    
    nickels = change/nickel;
    //change = change - (nickels*nickel);
    change -= (nickels*nickel);
    
    pennies = change/penny;
    //change = change - (pennies*penny);
    change -= (pennies*penny);

    cout << "You can provide this change of " << cents << "cents as follows:"<<  endl;
    cout << "Dollars: " << dollars  << endl;
    cout << "Quarter: " << quarters  << endl;
    cout << "Dimes: " << dimes  << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
    
    return 0;
}