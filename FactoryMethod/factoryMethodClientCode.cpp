#include "factoryMethodClientCode.hpp"

#include "TransportCreatorInterface.hpp"

void factoryMethodClientCode(TransportCreatorInterface& creator) {
  TransportInterface* test = creator.createTransport();
  test->deliver();
};
