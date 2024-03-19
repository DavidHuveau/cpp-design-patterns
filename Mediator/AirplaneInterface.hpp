#ifndef AIRPLANE_INTERFACE_HPP_INCLUDED
#define AIRPLANE_INTERFACE_HPP_INCLUDED

#include <string>

// Colleague Interface
class AirplaneInterface {
public:
  virtual void requestTakeoff()                                   = 0;
  virtual void requestLanding()                                   = 0;
  virtual void notifyAirTrafficControl(const std::string message) = 0;
};

#endif  // AIRPLANE_INTERFACE_HPP_INCLUDED
