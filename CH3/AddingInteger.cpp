#include <iostream>// enables program to outpout data to the screen


// funciton  main begind program execution
int main(){
int number1{0}; // initialazed to 0 but it could be also as = 0 c++14 
int number2{0};
int sum{0};

std::cout << "Enter first number: ";// displays message
std::cin >> number1;

std::cout << "Enter second number: ";
std::cin >> number2;

sum = number1 + number2;

std::cout << "number of sum is equal to: " << sum << std::endl;
return 0;// indicator that the program ended succesfully 
}// end function main