#include "ShipTransportCreator.hpp"
#include "ShipTransport.hpp"

TransportInterface* ShipTransportCreator::createTransport() const {
  return new ShipTransport();
};
