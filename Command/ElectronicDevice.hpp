#ifndef ELECTRONIC_DEVICE_HPP_INCLUDED
#define ELECTRONIC_DEVICE_HPP_INCLUDED

#include <string>

// Receiver
class ElectronicDevice {
private:
  std::string m_name;

public:
  ElectronicDevice(const std::string& name);
  void turnOn() const;
  void turnOff() const;
};

#endif  // ELECTRONIC_DEVICE_HPP_INCLUDED
