#ifndef Director_h
#define Director_h
#include <stdio.h>
#include <string>
#include "State.h"
#include "Vehicle.h"
#include "Input.h"
using namespace std;
class Director{
  public:
  Director(double L, State* s0, double Dt);
    ~Director();
    bool run();
      void setInputs(vector<Input*> inputs){
        this->inputs = inputs;
        }
      vector<Input*> getInputs() const {return inputs;}
      vector<State*> getStates() const {return states;}
      double getT0() const {return this-> time0;}
      double getDT() const {return this->Dt;}
      bool isGood(){return good;}
    protected:
      vector<State*> states;
      vector<Input*> inputs;
      Vehicle* vehicle;
      double Dt;
      double L;
      bool good;
      double time0;
};
#endif