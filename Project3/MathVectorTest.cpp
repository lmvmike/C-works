//
//  MathVectorTest.cpp
//  You WILL need to change this file.
//  Provide implementations for runTests and readElementsTest that exercise the
//    class (as well as implementations for any other methods you create).

#include "MathVectorTest.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
MathVectorTest::MathVectorTest( ) {
   // you will need to implement the constructor or 
   // else your initializations may be wrong
    this->toString = false; 
    this->readElements = false;
    this->constructor = false;
}

void MathVectorTest::runTests() {
  /////////////////////////////////////////////////////////////////////////////
    {
   // call your own methds---as many as you like, or arrange tests as you like
   bool contru = false;
   bool entre = true;
   constructor = true;
     MathVector test1(0);
      if (test1.getNumElements() == 0 && test1.getElements().size() == 0){
      }
           else{
                 this->constructor = false;
               }
       /////////////////////////////////////////////////////////////////////////
        if (constructor == true){
          MathVector test2(2);
        if (test2.getNumElements() == 2 && test2.getElements().size() == 2){
      this->constructor = true;
      }
          else{
        this->constructor=false;
        }
    }
   //    /////////////////////////////////////////////////////////////////////////////
     if(constructor == true){
       MathVector test3(4);
       if(test3.getNumElements() == 4 && test3.getElements().size() == 4){
         this->constructor = true;
     }
       else{
         this->constructor = false;
        }
  }
}
  //Here are the various readElements tests. There are multiple tests 
readElements = true;
///////////////////////////////////////////////////////////////////
  if(readElements){
    readElements = readElementsTest(2, "0,0", "");
    this->readElements=true;
    }
///////////////////////////////////////////////////////////////////

if(readElements){
    readElements = readElementsTest(2, "1.0,0.2,-1", "Unable to read line [1.0,0.2,-1] (more than 2 elements)");
        this->readElements=false;
    }

  ///////////////////////////////////////////////////////////////////
  if(readElements){
    readElements = readElementsTest(4, "0,0,0,0", "");
    this->readElements=true;
    }
///////////////////////////////////////////////////////////////////
  if(readElements){
    this->readElements = readElementsTest(4, "0.1,0.0,0.0,0a.0", "Unable to read element 3 of [0.1,0.0,0.0,0a.0] (expected 4 elements)");
    }
  else{
    this->readElements=false;
    }
///////////////////////////////////////////////////////////////////
  if(readElements){
    readElements = readElementsTest(4, "0.1,0.0,", "Unable to read element 2 of [0.1,0.0,] (expected 4 elements)");
    }
  else{
    this->readElements=false;
    }
///////////////////////////////////////////////////////////////////
  if(readElements){
    readElements = readElementsTest(4, "0.1,0.0,0.0,", "Unable to read element 3 of [0.1,0.0,0.0,] (expected 4 elements)");
    }
  else{
    this->readElements=false;
    }
  ///////////////////////////////////////////////////////////////////
  if(readElements){
    readElements = readElementsTest(4, "0.1,0.0,0.0", "Unable to read element 2 of [0.1,0.0,0.0] (expected 4 elements)");
    }
  else{
    this->readElements=false;
    }
///////////////////////////////////////////////////////////////////
  if(readElements){
    readElements = readElementsTest(4, "0.1,0.0,0.0,0.0", "Unable to read element 2 of [0.1,0.0,0.0] (expected 4 elements)");
    }
  else{
    this->readElements=false;
    }
///////////////////////////////////////////////////////////////////  
  toString = true;

    return;
}

bool MathVectorTest::readElementsTest( int numElements, string elementsString, string statusString )
{
    bool result=false;

    MathVector tester(numElements);
    tester.readElements(elementsString);
    string status = tester.getStatus();
       if (statusString == status){
             result = true;
         }
          else{
                cout << "The status output was: " << "\"" << status << "\"" << " , however, it should have been: " << "\"" << statusString << "\"" << endl;
              }
   // provide your implementation here    

    return result;
}

string MathVectorTest::getTestResultsString() 
{
    stringstream str;

    str << "Beginning tests.\n";

        if (!constructor){
              str << "   UNIT TEST FAILED: Constructor\n";
          }
        if (!readElements){
             str << "   UNIT TEST FAILED: readElements\n";
          }
        if (!toString){
            str << "   UNIT TEST FAILED: toString\n";
         }
            // fill in with your own logic to produce tests output
            str << "Tests complete.\n";

    return str.str( );
}
