#include <iostream>
#include "Car.hpp"

using namespace std;

void Car::start() const {
  m_engine.start();
  m_lights.turnOn();
  cout << "Car is ready to drive" << endl;
};

void Car::stop() const {
  m_engine.stop();
  m_lights.turnOff();
  cout << "Car has stopped" << endl;
};
