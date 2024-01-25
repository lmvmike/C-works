//class averagecpp fig 4.12
//solving the class average problem using sentinel controlled iteration
#include <iostream>
#include <iomanip> // parameterized stream manipulatios
using namespace std;

int main(){
// initialization phase
 int total = 0;
 unsigned int gradeCounter = 0;

 //processing phase
 //promt for input and read grade from user
 cout << "Enter grade or -1 to quit: ";
 int grade;
 cin >> grade;

 //loop until sentinel value read from user
 while(grade != -1) {
    total = total + grade;
    gradeCounter = gradeCounter + 1;

    // promt for input and read fro user
    cout << "Enter grade or -1 to quit: ";
    cin >> grade;
 }

 //termination phase
 //if user entered at least one grade..
 if (gradeCounter != 0) {
    // use number with decimal point to calculate average of grades
    double average{static_cast<double>(total) / gradeCounter};// declares doubloe average which stores the class averga as flooating point number

    //display total and average (with two digits of precision)
    cout << "\nTotal of the " << gradeCounter << " grade entered is " << total;
    cout << setprecision(2) << fixed;
    cout << "\nClass average is " << average << endl;
 }
}
