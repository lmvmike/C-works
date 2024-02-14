//fig
//inline function that calc the volume of a cube
#include<iostream>
using namespace std;

//definition of inline funciton cube definition of function appears
//before function is called, so a fucntion prototype isnt required
//first line of the fucntion defenition acts as the prototype
inline double cube(const double side){
    return side * side * side ;//calc cube volume
}

int main (){
    double  sideValue;//stores value enteredc by user
    cout << "Enter the side length of ur cube ";
    cin >> sideValue; // read value from the user

    // cacl cube sideValue and display result
    cout << " Volume of the cube with side "
    << sideValue << " is " << cube(sideValue) << endl;
}