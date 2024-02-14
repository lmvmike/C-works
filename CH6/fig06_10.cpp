 //using random  (C++11) random-number generation engine and distribution to roll a six-side  die.
 #include <iostream>
 #include <iomanip>
 #include <random>
 #include <ctime>
 using namespace std;

 int main() {
// use a default random-number generation engine to
// produce uniformly distributed pseudorandom int values from 1 - 6
default_random_engine engine{static_cast<unsigned int>(time(0))};
uniform_int_distribution<unsigned int> randomInt{1, 6};

//loop x10
for (unsigned int counter{1}; counter <= 5; ++counter){
    //pick random number from 1-6 and output it 
    cout << setw(10) << randomInt(engine);

    //if counter is divisible by 5, start a new line of output
    if (counter % 5 == 0){
        cout << endl;
    }
}
 }

