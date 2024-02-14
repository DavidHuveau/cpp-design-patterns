#include <iostream>

#include "TruckTransportCreator.hpp"
#include "TruckTransport.hpp"

TransportInterface* TruckTransportCreator::createTransport() const {
  return new TruckTransport();
};
