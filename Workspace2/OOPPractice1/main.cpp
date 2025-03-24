#include <iostream>
#include <string>

using namespace std;

class BankAccount{  // a class defines what it means to be something
  public: //access specifier
        string name;
        int balance;
        
   void withdraw(int amount){ //member functions; members of the class
       balance = balance - amount;
   }     
        
    void print(){
       cout << name << " has " << balance << " naira." << endl;
    }    
};

int main(){
  BankAccount account1; //an object (account1) is an instance of the class (here BankAccount)
  account1.name = "Meymunah";
  account1.balance = 30000;
  
  account1.print();
  
  BankAccount account2;
  account2.name = "Mirah";
  account2.balance = 25000;
  
  account2.print();
  account2.withdraw(1000);
  cout << account2.name << " now has " << account2.balance << " naira.";
    
    cout << endl;
    return 0;
}