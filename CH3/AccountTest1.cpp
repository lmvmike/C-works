//Creating and manipulating an Account object
#include <iostream>
#include <string>
#include "Account1.h"

using namespace std;

int main(){

Account myAccount; // creating an account object called myAccount

// Next: display the iniitiial value of myAccount 's name is the empty string
cout << "Initial account name is: " << myAccount.getName();

//Next: promt for and read name
cout <<"\nPlease enter the Account name: ";
string theName;
getline(cin, theName);// read a line of text
myAccount.setName(theName); // put theName in myAcount

//display the name stored in objectAccount
cout << "Name in object myAccoutnt is: " << myAccount.getName() <<endl;


}