#include <iostream>
#include "Account2.h"
using namespace std;



int main(){
    //creating 2 account objects
Account account1{"Miguel Rocha"};
Account account2{"Maricela Sanchez"};



// display initiasl value of name for each Account
cout << "Account 1 name is: " << account1.getName() << endl;
cout << "Account 2 name is: " << account2.getName() << endl;

}