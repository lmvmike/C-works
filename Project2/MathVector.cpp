#include "MathVector.h"// include library
#include <sstream>// include library
#include <iomanip>// include library
#include <iostream>// include library
#include <bits/stdc++.h>// include library
using namespace std;


MathVector::MathVector( int numElements ): numElements( numElements ){ // calling function from .h
  this->elements.resize(numElements);  
}
bool MathVector::readElements(string str){
  int i = 0; // declaring the counter for the increments on for loops
  try{ //statement allows you to define a block of code to be tested for errors while it is being executed
    istringstream NewElements;
    NewElements.str(str);
    char blank=' ';

    for(i=0; i<numElements-1;i++){
      if(NewElements.good()){
        NewElements >> elements[i] >> blank;// the inputs for elements
        blank = ' ';
      }
      if(NewElements.fail()){
        throw new exception();// Throw an exception when a problem arise
      }
    }
    if(NewElements.good()){// first case
      NewElements >> elements[numElements-1];
    }
    if(NewElements.fail()){// second case
      throw new exception();// Throw an exception when a problem arise
    }
    if(!NewElements.eof()){// third case 
      cout << "Unable to read line [" << str << "] (more than " << numElements;
      return false;
    }
  }
    catch( ...){//Block of code to handle errors
      cout << "Unable to read element " << i << " of [" << str << "] (expected " << numElements << " elements)\n";//Block of code to handle errors
      return false;//Block of code to handle errors
    }
  return true;
}
string MathVector::toString( ) { 
  int finishing = 0;
    stringstream result;
  for (int i = 0; i < numElements - 1; i++){
    char final;
    result << fixed << setprecision(3) << elements[i] << ",";
  }
  //display_prompt(PROMPT);
  result << elements[numElements-1];
  return result.str();

  }