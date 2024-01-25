#include <iostream>
#include "Vehicle.cpp"
#include "Vehicle.h"
#include "State.cpp"
#include "State.h"
#include "Input.cpp"
#include "Input.h"
#include "MathVector.cpp"
#include "MathVector.h"
#include "Project2.cpp"
#include "Project2.h"
#include "Director.cpp"
#include "Director.h"
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main() {
string inputFile;
string outputFile;
cout << " Add Input and outputfiles in following way: inputfile#.txt and outputFile.txt\n";
cin >> inputFile;
cin >> outputFile;
  Project2 project2( inputFile , outputFile );
  if(project2.readInputFile()){
    project2.run();// process project 2 where it does most of the cpp joins function
  }
  else{}
     project2.writeOutputFile();// display resul
return 0;
}