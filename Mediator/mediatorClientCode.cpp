#include "mediatorClientCode.hpp"
#include "AirportControlTower.hpp"
#include "AirplaneInterface.hpp"
#include "CommercialAirplane.hpp"


void manageAirTraffic() {
  // Instantiate the Mediator (Airport Control Tower)
  AirportControlTower* controlTower = new AirportControlTower();

  // Instantiate Concrete Colleagues (Commercial Airplanes)
  AirplaneInterface* airplane1 = new CommercialAirplane(controlTower);
  AirplaneInterface* airplane2 = new CommercialAirplane(controlTower);

  // Set up the association between Concrete Colleagues and the Mediator
  airplane1->requestTakeoff();
  airplane2->requestLanding();

  // Output:
  // Commercial Airplane: Requesting takeoff clearance.
  // Commercial Airplane: Requesting landing clearance.
};
