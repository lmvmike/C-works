#include "State.h"
using namespace std;
State::State():MathVector(4)
{
}

State::State(double x, double y, double delta, double theta):MathVector(3){
}

State::State(const State& other):MathVector(other){
  }

double State::getX(){return elements.at(0); }
double State::getY(){return elements.at(1); }
double State::getDelta(){return elements.at(2); }
double State::getTheta(){return elements.at(3); }
void State::setX( double newX ){elements.at(0) = newX;}
void State::setY( double newY ){elements.at(0) = newY;}
void State::setDelta( double newDelta ){
  if(newDelta<=DELTA_MIN){
    this->setDelta(DELTA_MIN);
  }
  else if (newDelta>= DELTA_MAX){
    this->setDelta(DELTA_MAX);
  }
  else{
    elements.at(2) = newDelta;
  }
}
void State::setTheta(double newTheta){
  elements.at(3) = newTheta;

  while(this->getTheta() < 0){
    this->setTheta(this->getTheta() + HEADING_MAX);
    }
  while(this->getTheta() > HEADING_MAX){
    this->setTheta(this->getTheta() - HEADING_MAX);
  }
}