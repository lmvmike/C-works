//
//
#include <iostream>
using namespace std;

int main(){
//demostrate pstfix increment operator
unsigned int c = 5;
cout << "c before post increment: " << c << endl; // prints 5
cout << "   post increment c: " << c++ << endl; // prints 5
cout << " c after postincrement: " << c << endl; // prints 6

cout << endl; // skip line or use "\n"

//demonstrate prefix increment operator
c = 5;// assigns 5 to c
cout << " c before preincrement:" << c << endl;
cout << "     preincrementing c:" << ++c << endl;
cout << "  c after preincrement:" << c << endl;
}