#include "Vehicle.h"
#include <vector>
using namespace std;
Vehicle::Vehicle():state(NULL){
  this->state = new State(0.0,0.0,0.0,0.0);
}
Vehicle::Vehicle(State s, double wheelbase):wheelbase(wheelbase){
  this->state = new State(s);
}
Vehicle::~Vehicle(){
  if(state){
    delete state;
  }
  //The equations of motion for the car-like robot comming from zybook hint
}
State* Vehicle::update(Input *u, double ts){
  float x;
  float y;
  float xdot = u->getV() * cos(state->getDelta()) * cos(state->getTheta());// defining the formulas as a double or float to get precise number likedecimal
  float ydot = u->getV() * cos(state->getDelta()) * sin(state->getTheta());
  float deltadot = u->getDeltaDot();
  float thetadot = u->getV() * (1.0/wheelbase)*sin(state->getDelta());

  state->setX(state->getX() + ts*xdot);
  state->setY(state->getY() + ts*ydot);
  state->setDelta(state->getDelta() + ts*deltadot);
  state->setTheta(state->getTheta() + ts*thetadot);

  return this->state;  
}

double Vehicle::getWheelbase(){ // definition comming from the vehicle.h file on private
  return this-> wheelbase;
}
State* Vehicle::getState(){// definition comming from the vehicle.h file on private
  return this->state;
}