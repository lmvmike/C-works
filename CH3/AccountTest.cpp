
#include <iostream>
#include <string>
using namespace std;
#include "Account.h"
int main(){



Account account1{"Miguel Rocha", 50};
Account account2{"Maricela Sanchez", 1900};

// display initial balance of each object
cout << "Acount1: " << account1.getName() << "  balance is $" << account1.getBalance();
cout << "\nAcount2: " << account2.getName() << " balance is $" << account2.getBalance();



cout <<"\n\nEnter deposit amount for account 1: "; //promt
int depositAmount;
cin >> depositAmount; // obtain user data input
cout << "Adding " << depositAmount << " to the account balance";
account1.deposit(depositAmount);

// display balances
cout << "\n\nAcount1: " << account1.getName() << " balance is $" << account1.getBalance();
cout << "\nAcount2: " << account2.getName() << " balance is $" << account2.getBalance();



cout <<"\n\nEnter deposit amount for account 2: "; //promt
cin >> depositAmount; // obtain user data input
cout << "Adding " << depositAmount << " to the account balance";
account2.deposit(depositAmount);// add to account2 balance

// display balances
cout << "\n\nAcount1: " << account1.getName() << " balance is $" << account1.getBalance();
cout << "\nAcount2: " << account2.getName() << " balance is $" << account2.getBalance();
}