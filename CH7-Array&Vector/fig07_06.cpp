//
//computation of a sum of an array
#include <iostream>
#include <array>
using namespace std;

int main() {
    const size_t arraySize = 4;
    array<int, arraySize> a{10, 20, 30, 40};
    int total = 0;

    // sum content of array a
    for (size_t i =0; i < a.size(); i++){
        total += a[i];
    }
    cout << "Total of arry elements: " << total << endl;
}