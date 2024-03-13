#include "ElectronicDevice.hpp"

#include <iostream>

using namespace std;

ElectronicDevice::ElectronicDevice(const std::string& name) : m_name(name){};

void ElectronicDevice::turnOn() const {
  cout << m_name << " is now ON." << endl;
};

void ElectronicDevice::turnOff() const {
  cout << m_name << " is now OFF." << endl;
};
