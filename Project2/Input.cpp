#include "Input.h"
#include <string>
#include "Director.h"
#include <iostream>
using namespace std;

Input::Input(double v, double deltaDot):MathVector(2){
  this->elements.at(0) = v;
  this->elements.at(1) = deltaDot;
}
Input::Input():MathVector(2){ 
}
Input::Input(const Input& other):MathVector(other){
  }
double Input::getDeltaDot(){return elements.at(1);}

double Input::getV(){return elements.at(0);}
