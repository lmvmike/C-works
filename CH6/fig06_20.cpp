//fig06_20
// Overload square funcitons
#include <iostream>
using namespace std;

//function square for int values
int square(int x){
    cout << "Square for integer " << x << " is ";
    return x * x;
}

//function sauqre for double values
double square(double y) {
    cout << "Square for double " << y << " is ";
    return y * y;
}

int main(){
    cout << square(7); //calls int version
    cout << endl;
    cout <<square(7.5); // calls double version
    cout << endl;
}