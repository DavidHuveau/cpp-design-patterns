#ifndef MEDIATOR_INTERFACE_HPP_INCLUDED
#define MEDIATOR_INTERFACE_HPP_INCLUDED

#include "AirplaneInterface.hpp"

// Mediator Interface
class MediatorInterface {
public:
  virtual void requestTakeoff(AirplaneInterface* airplane) = 0;
  virtual void requestLanding(AirplaneInterface* airplane) = 0;
};

#endif  // MEDIATOR_INTERFACE_HPP_INCLUDED
