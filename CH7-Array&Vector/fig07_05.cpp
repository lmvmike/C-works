// example
// set array s to even integres from 2 to 10
#include<iostream>
#include<iomanip>
#include<array>
using namespace std;

int main(){
    //constant variable can be used to specify array size
    const size_t arraySize = 5; //must initialize in declaration

    array<int, arraySize> values; //  array values has 5 elemnts

    for(size_t i = 0; i < values.size(); i++) {
        values [i] = 2 + 2 * i;
    }

    cout << "Element" << setw(10) << "Value\n";

    //output xontrent of array s in rtabular format
    for(size_t j = 0; j < values.size( ); j++) {
        cout << setw(7) << j << setw(10) << values[j] << endl;
}
}