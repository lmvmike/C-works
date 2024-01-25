// Account class with a contructor that initializes the account name
#include <iostream>
#include <string>
using namespace std;
class Account {
public:
// contructor initializes data memeber name with parameter accountName
explicit Account(string accountName)
: name{accountName} {// member initializer
    // empty body
}

// function to set the account name
void setName(string accountName){
name = accountName;
}


string getName() const{
    return name;
}
private:
string name;
};