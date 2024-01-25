#include "Director.h"
#include <iostream>
#include <fstream>
using namespace std;
//class defenition
Director::Director(double Dt,State* s0, double L): inputs(), states(), time0(0), vehicle(NULL), Dt(Dt), L(L), good(false){ // defining from director h file
  float v = 0;
  states.push_back(s0);//increase the size of the entire vector by one
  double t;
    vehicle = new Vehicle(*s0, L);
}
bool Director::run(){
  char com = ' '; //mutator
  bool result = false; // condition - library fstream used from director
  unsigned in = 0;//testing for values of input
  for(unsigned short int i=0; i<inputs.size(); i++){
    State *s = new State();
    State *sTemp = vehicle->update(inputs[i]);
    s->setX(sTemp->getX());
    s->setY(sTemp->getY());
    s->setDelta(sTemp->getDelta());
    s->setTheta(sTemp->getTheta());
    states.push_back(s);
  }
  return result;
}