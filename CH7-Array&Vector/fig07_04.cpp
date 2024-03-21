//exmple 
//initializing an array in declaration
#include<iomanip>
using namespace std;
#include<iostream>
#include<array>

int main() {
    array<int, 5> n{32, 27, 64, 18, 95};

    cout << "Elemement"  << setw(10) << "Value\n";

    //output each array elemnt's value 
    for (size_t i = 0;  i < n.size(); ++i) {
        cout << setw(7) << i <<  setw(10) << n[i] << endl;
    }
}

