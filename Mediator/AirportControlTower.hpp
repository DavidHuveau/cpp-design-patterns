#ifndef AIRPORT_CONTROL_TOWER_HPP_INCLUDED
#define AIRPORT_CONTROL_TOWER_HPP_INCLUDED

#include "MediatorInterface.hpp"

// Concrete Mediator
class AirportControlTower : public MediatorInterface {
public:
  void requestTakeoff(AirplaneInterface* airplane) override;
  void requestLanding(AirplaneInterface* airplane) override;
};

#endif  // AIRPORT_CONTROL_TOWER_HPP_INCLUDED
