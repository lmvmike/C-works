
#include <string>
using namespace std;


class Account{
public:
// Account constructor with two parameters
Account(string accountName, int initialBalance)
: name{accountName} { // assign accountName to data memeber name

//validate that the initial balance is greater than 0; if not,
// data memeber balance keeps its default initial value of 0
    if (initialBalance > 0){ // if the initialBalance is valid 
     balance = initialBalance;
    }
}

// function that deposits(adds) only a valid amount to the balance
void deposit(int depositAmount){
    if(depositAmount > 0){ // if depositAmount is valid
    balance = balance + depositAmount;
    }
}

// function that returns the account balance
int getBalance() const {
    return balance;
}

// function that sets the name
void setName(string accountName){
    name = accountName;
}

// function that returns the name
string getName() const {
    return name;
}
private:
int balance = 0; // data memeber with default initial value
string name; // account name data mem
};