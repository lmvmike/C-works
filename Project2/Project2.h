#ifndef Project2_h
#define Project2_h

#include <stdio.h>
#include<iostream>
#include <fstream>
#include "State.h"
#include "Director.h"
using namespace std;
class Project2{
public:
  Project2(string inputFile, string outputFile);
  ~Project2();
  bool readInputFile();
  void run();
  bool writeOutputFile();
  string toString();
protected:
  ifstream inFile;
  ofstream outFile;
  string inFileName;
  string outFileName;
  State* s0;
  double wheelbase;
  double Dt;
  Director *d;
};
#endif