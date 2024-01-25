// studenttest.cpp file
//create and test student object
#include <iostream>
#include "Student.h"
using namespace std;

int main(){
    Student account1{"Miguel Rocha", 93};
    Student account2{"Maricela Sanchez", 88};

cout << account1.getName() << "'s letter garde equivalent of "
    << account1.getAverage() << " is: "
    << account1.getLetterGrade() << "\n";
cout << account2.getName() << "'s letter garde equivalent of "
    << account2.getAverage() << " is: "
    << account2.getLetterGrade() << endl;
}