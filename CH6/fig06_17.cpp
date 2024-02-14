//fig
//passing arguments by value and by reference
#include <iostream>
using namespace std;

int squareByValue(int);// function prototype(value pass)
void  squareByReference(int&);//function prototype (reference pass)

int main() {
    int x{2}; // value to square usning squareByValue
    int z{4}; //value to square using squareByReference

//demonstarte suareByValue
cout << "X = " << x << " before squaredByValue\n";
cout << "Value returned by squareByValue: " << squareByValue(x) << endl;

cout << "X = " << x << " after squareByValue\n" << endl;

// demonstrate squareByReference
cout << "Z = " << z  << " before squareByReference" << endl;
squareByReference(z);
cout << "Z = "<< z << " after squareByReference \n" << endl;
}

//squareByValue multiple number by itself, stores the
//result in number and return the new value of number
int squareByValue(int number){
    return number *= number; // caller's argument not modified
}

//squaredByReference multiple numberFer by itself and stores the result
//in the variable to which numberRef refers in the function main
void squareByReference(int& numberRef){
    numberRef *= numberRef;
}