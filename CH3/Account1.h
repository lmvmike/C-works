// acount class definition
// containts a name data memeber and memeber functions to set and get its value
#include<iostream>
using namespace std;
class Account{ // class definition

public: 
// memeber function that sets the account name in the object
void setName(string accountName){
name = accountName;// store the account name
}
string getName() const{
    return name; // return name's value to this function's caller
}
private:

string name;

}; // ends class Account