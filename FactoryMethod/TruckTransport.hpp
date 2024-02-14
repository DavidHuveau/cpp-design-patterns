#ifndef TRUCK_TRANSPORT_HPP_INCLUDED
#define TRUCK_TRANSPORT_HPP_INCLUDED

#include "TransportInterface.hpp"

class TruckTransport: public TransportInterface {
public:
  void deliver() const override;
};

#endif  // TRUCK_TRANSPORT_HPP_INCLUDED
