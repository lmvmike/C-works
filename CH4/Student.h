 // fig 4.6 student.h
 using namespace std;
 #include <string>

 class Student {
public:
//constructor initializes datav memebers
Student(string studentName, int studentAverage):
name(studentName){

    //sets average data memeber if the sudentaverage is valid
    setAverage(studentAverage);
}

//sets the student's name
void setName(string studentName){
    name = studentName;
}

//retrieves the student's name
string getName() const{
return name;
}

//sets the student's average
void setAverage(float studentAverage){
    //
    //
    if(studentAverage > 0){
        if(studentAverage <= 100){
            average = studentAverage;
        }
    }
}

//
float getAverage() const{
    return average;
}

// determines and returns the students's letter grade
string getLetterGrade() const{
    //initialized to empty string by class string's constructor 
    string letterGrade;

    if (average >= 90){
        letterGrade = "A";
    }
    else if (average >= 80){
        letterGrade = "B";
    }
        else if (average >= 70){
        letterGrade = "C";
    }
        else if (average >= 60){
        letterGrade = "D";
    }
        else {
        letterGrade = "F";
    }
    
    return letterGrade;
}
private:
string name;
float average =  0;
 };