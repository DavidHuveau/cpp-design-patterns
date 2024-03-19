#ifndef COMMERCIAL_INTERFACE_HPP_INCLUDED
#define COMMERCIAL_INTERFACE_HPP_INCLUDED

#include "AirplaneInterface.hpp"
#include "MediatorInterface.hpp"

// ConcreteColleague Class
class CommercialAirplane : public AirplaneInterface {
private:
  MediatorInterface* m_mediator;
public:
  CommercialAirplane(MediatorInterface* mediator);
  void requestTakeoff() override;
  void requestLanding() override;
  void notifyAirTrafficControl(const std::string message) override;
};

#endif  // COMMERCIAL_INTERFACE_HPP_INCLUDED
