#include <iostream>// enables program to perform input an output

using std::cout; //program uses cout shortcut
using std::cin; //program uses cin shortcut
using std::endl; //program uses endl shortcut
using namespace std; // does the same as the three above all in one declaration
// main function 
int main (){
int  number1 = 0;
int  number2 = 0;
cout << "Enter two integers to compare: ";
cin >> number1 >> number2;

//begins if statements
if (number1 == number2){
    cout << number1 << " is equal to :" << number2 << endl;
}
if (number1 != number2){
    cout << number1 << " is not equal to: " << number2 << endl;
}
if (number1 < number2){
    cout << number1 << " is less than: " << number2 << endl;
}
if (number1 > number2){
    cout << number1 << " is greater than: " << number2 << endl;
}
if (number1 <= number2){
    cout << number1 << " is less or equal to: " << number2 << endl;
}
if (number1 >= number2){
    cout << number1 << " is greater or equal to: " << number2 << endl;
}
}