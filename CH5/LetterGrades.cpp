//fig 5.11
// Using a switch case statement  to count letter grades
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int total{0};// sum of grades
unsigned int gradeCounter{0}; // number of grades entered
unsigned int aCount{0}; // count of A grades
unsigned int bCount{0}; // count of b grades
unsigned int cCount{0}; // count of c grades
unsigned int dCount{0}; // count of d grades
unsigned int fCount{0}; // count of f grades

cout << "Enter the integer grades in the range 0-100.\n"
    << "Type the end-of-life indicator to terminate input:\n"
    << "  On UNIX/LINUX/MAC OS X type <Ctrl> d then press Enter\n"
    << "On Windows type <Ctrl> z then press Enter\n" << endl;

int grade;

//loop until user enter the end=of-file indicator
while (cin >> grade){
    total += grade; //add garde to total
    ++gradeCounter; //increments  gradeCounter 

    //increment appropiate letter grade counter
    switch(grade / 10){
        case 9: //grade was between 90
        case 10: // and 100, inclusive
         ++aCount;
         break; // exits switch

        case 8:
            ++bCount;
         break; // exits switch

         case 7:
         ++cCount;
            break; // exits switch

        case 6: //
            ++dCount;
            break;

        default:
            ++fCount;
            break;
    }// end switch
}//end while

// set floating-point number format 
cout << fixed << setprecision(2);

//display grade report
cout << "\nGrade Report:\n";

// if the user entered at least one grade...
if (gradeCounter != 0){
    //calculate average of all grades entered
    double average = static_cast<double>(total) / gradeCounter;
    
    //output summary of results
    cout << "Total of the " << gradeCounter << " grades entered is "
        << total << "\nClass average is " << average
        << "\nNumber of students who recieved each grade:"
        << "\nA: " << aCount << "\nB: " << bCount << "\nC: " << cCount
        << "\nD: " << dCount << "\nF: " << fCount << endl;
}
else { // no grade were enetered so output appropiate masseg
cout << "no grade were entered" << endl;
}
}