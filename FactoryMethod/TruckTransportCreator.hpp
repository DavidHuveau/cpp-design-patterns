#ifndef TRUCK_TRANSPORT_CREATOR_HPP_INCLUDED
#define TRUCK_TRANSPORT_CREATOR_HPP_INCLUDED

#include "TransportCreatorInterface.hpp"

class TruckTransportCreator: public TransportCreatorInterface {
public:
  TransportInterface* createTransport() const override;
};

#endif  // TRUCK_TRANSPORT_CREATOR_HPP_INCLUDED
