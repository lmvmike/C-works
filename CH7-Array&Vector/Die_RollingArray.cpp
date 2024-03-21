//
//die-rolling using an array instead of switch
#include<iostream>
#include<iomanip>
#include<array>
#include<random>
#include<ctime> 
using namespace std;

int main() {
    //use the default random-number generation engine to
    //produce uniformly distribuited pseudorandom int values from 1 to 6
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 6);

    const size_t arraySize = 7;//ingonre element 0
    array<unsigned int, arraySize> frequency{};// initialize to 0s

    // roll die 60M timesl use die value as frequency index
    for(unsigned int roll = 1; roll <= 60'000'000; ++roll){
        ++frequency[randomInt(engine)];
    }

    cout << "Face" << setw(13) <<  "Frequency\n";

    //output each array elemnt's value
    for(size_t face = 1; face < frequency.size(); ++face) {
        cout << setw(4) << face << setw(13) << frequency[face] << endl;
    }

}