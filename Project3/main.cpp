// project3
// main.cpp
// You should change this file per the project instructions

#include <iostream>
#include <string>
#include "MathVectorTest.h"
#include <string>
#include "MathVectorTest.h"
#include "MathVector.h"
int main(int argc, const char * argv[]) {
    if (argc > 1) {
        std::cout << "Usage: ./project3" << std::endl;
        return EXIT_FAILURE;
    }
    
    MathVectorTest tester;
    tester.runTests( );
    std::string result = tester.getTestResultsString( );
    
    std::cout << result;
    
    return EXIT_SUCCESS;
    
    /* you should edit main to return a usage statement if incorrect args */
    
    /* call the test function 
       do not edit the below three lines */
    //MathVectorTest tester;
   // tester.runTests( );
    //std::string result = tester.getTestResultsString( );
    /* end calling the test function */
    
    /* add your own code to print the result to the stdout */
    
   // return EXIT_SUCCESS;
}
