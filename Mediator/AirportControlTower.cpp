#include "AirportControlTower.hpp"

void AirportControlTower::requestTakeoff(AirplaneInterface* airplane) {
  airplane->notifyAirTrafficControl("Requesting takeoff clearance.");
};

void AirportControlTower::requestLanding(AirplaneInterface* airplane) {
  airplane->notifyAirTrafficControl("Requesting landing clearance.");
};
