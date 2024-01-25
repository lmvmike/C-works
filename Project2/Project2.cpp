#include "Project2.h"
#include <sstream>
#include "Input.h"
#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//class def
Project2::Project2(string inputFile, string outputFile):inFileName(inputFile), outFileName(outputFile), s0(NULL){
  }
bool Project2::readInputFile(){
  bool term = true;
  bool result = false;
  d = NULL;
  inFile.open(inFileName);
  if(!inFile.is_open()){// case where is not open inFile
    cout << "Cannot open the file" << "\n";// display
  }
  if(inFile.is_open()){// case opening inFile is succesfull
    int lineNumber=0;// mutator
    string linev;// mutator test in case for use later
    istringstream lineCom; //
    string lineStr; //
    
    string linre;
    string linepos; // mutator test in case for use later
    string linenegative;
    string linenonNegative;// mutator test in case for use later

    string dataT; //this declaration will be for type of data
    string dataN; //this declaration will be fornormal data

    getline(inFile, lineStr);
    while(lineStr != "" && lineNumber < 3){
      lineCom.clear();
      lineCom.str(lineStr);
      lineCom >> dataT;// adding the data type from string
      if(dataT == "InitialPose:"){// from input file eg
        lineCom >> dataN;
        s0 = new State();
        s0->readElements(dataN);
        }
      else if(dataT == "Wheelbase:"){// from input file eg
        lineCom >> wheelbase; // inputs
        }
      else if(dataT == "Dt:"){
        lineCom >> Dt; // inputs 
      }
      else{
        cout<<"Error produced on the fisrt 3 lines" << "\n";
      }
      getline(inFile,lineStr);
      lineNumber++;
      }
    if(lineNumber == 3 && Dt > 0 && wheelbase > 0  && s0 != NULL){
      d = new Director(wheelbase, s0, Dt);
      vector<Input*> inputs;

      while(lineStr !=""){
        Input *i = new Input();
        if(i->readElements(lineStr)){
          inputs.push_back(i);//increase the size of the entire vector by one
        }
        else{
          return result;
        }
        getline(inFile, lineStr);
      }
      result = true;
      d->setInputs(inputs);
      }
    }
return result;
  }
Project2::~Project2(){
  if(s0){
    delete s0;
  }
  if(this->inFile.is_open()){
    this->inFile.close();
  }
}
void Project2::run(){// final run before call on the main 
  d->run();
  return;
}
string Project2::toString(){
  stringstream good;
  stringstream result;
  result << "inFileName=" << this->inFileName;
  result<< ", outFileName=" << this->outFileName;
  if(this->s0 !=NULL){
    result << ", s0=" << this->s0->toString();
    }
  else{
    result << ", s0=NULL";
    }
  result << ", wheelbase=" << this->wheelbase; //displays
  result << ", Dt=" << this->Dt << "\n";//displays
  return result.str();
  }

bool Project2::writeOutputFile(){// output file
  bool neutral;
  bool result=false;
  outFile.open(outFileName);
  if(outFile.is_open()){
    if(d != NULL){
      double t0 = d->getT0();
      double Dt = d->getDT();
      vector<State*> outputs = d ->getStates();
      vector<Input*> inputs = d->getInputs();
      double t = t0;
      if(outputs.size() != inputs.size()+1){
        cout << "if input and output are empty would be ok. Remember that input should be 1 less than the output\n";
      }
       else{
        unsigned i=0;
        for(i=0; i<inputs.size();i++){
          bool good(false);
          outFile << fixed << setprecision(3) << t << ",";
          outFile << outputs[i]->toString() << ",";
          outFile << inputs[i]->toString() << "\n";
          t = t+Dt;
        }
        outFile <<t <<",";
        outFile << outputs[i]->toString() << "\n";
        result = true;
      }
    }
  }
    return result;
}