// 5.6
//compound-interest calc with for.
#include <iostream>
#include <iomanip>
#include <cmath> // for pww function
using namespace std;

int main() {
    //set floating point number format
    cout << fixed << setprecision(2);

     double principal = 10000.00;
     double rate = 0.08;

    cout << "Initial principal: " << principal <<endl;
    cout << "    Interest rate: " << rate << endl;

    // display headers
    cout << "\nYear" << setw(20) << "Amount on deposit" << endl;// setw(20) is for the space
    
    //calculate amount on deposit for each of ten years
    for (unsigned int year = 1; year <=10; year++){
        //calcululate amount on deposit  at the ebd of the specified year
        double amount = principal * pow(1.0 + rate, year);// pow functin is needed since c++ doesnt inlcude exp operator, so we use standard library cmath

        //display the year and the amount 
        cout << setw(4) << year <<setw(20) << amount  << endl;
    }
}