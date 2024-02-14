//continue of function template max
//function template maximum test program
#include <iostream>
#include "maximum.h" //inlcude definition of fucntion template maximum
using namespace std;

int main(){
    // demonstrate maximum with int values
    cout << "input three integer values: ";
    int int1, int2, int3;
    cin  >> int1 >> int2 >> int3;

//invoke int version of maximum
cout << "the max integer value is: "
   <<maximum(int1, int2, int3);

//demonstrate max with double values
cout << "\n\ninput three double values: ";
double double1, double2, double3;
cin >> double1 >>  double2 >> double3;

// invoke the double version of maximum
cout<<"\nthe max double value is: "
   << maximum(double1, double2, double3);

   //demonstrate maximum with char values
   cout << "\n\ninput three char values: ";
   char char1, char2, char3;
   cin >> char1 >> char2 >> char3;

   //invoke char version of max value
   cout << "the maximum character values is: "
     << maximum(char1, char2, char3);
}
