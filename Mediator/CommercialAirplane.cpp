#include "CommercialAirplane.hpp"

#include <iostream>

using namespace std;

CommercialAirplane::CommercialAirplane(MediatorInterface* mediator) : m_mediator(mediator) {};

void CommercialAirplane::requestTakeoff() {
  m_mediator->requestTakeoff(this);
};

void CommercialAirplane::requestLanding() {
  m_mediator->requestLanding(this);
};

void CommercialAirplane::notifyAirTrafficControl(const string message) {
  cout << "Commercial Airplane: " << message << endl;
};
