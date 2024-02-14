#ifndef SHIP_TRANSPORT_HPP_INCLUDED
#define SHIP_TRANSPORT_HPP_INCLUDED

#include "TransportInterface.hpp"

class ShipTransport: public TransportInterface {
public:
  void deliver() const override;
};

#endif  // SHIP_TRANSPORT_HPP_INCLUDED
