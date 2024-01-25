//
//
#include <iostream>
#include <iomanip>
using namespace std;

int maximum(int x, int y, int z);//funciton prototype

int main(){
cout << "Entrer three integers values: ";
int int1, int2, int3;
cin >> int1 >>  int2  >>  int3;

//invoke maximum
cout << "The maximum integer value is: "
    << maximum(int1, int2, int3) << endl;
}

// returns the largest of the three integers
int maximum(int x, int y, int z){
    int maximumValue{x};

    // determine whether y is the greates than maximumValue
    if(y > maximumValue){
        maximumValue = y;
    }

    // determiine wether z is the greater than maximumValue
    if(z > maximumValue){
        maximumValue = z;
    }
    
    return maximumValue;
}
