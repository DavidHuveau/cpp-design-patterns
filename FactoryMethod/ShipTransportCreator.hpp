#ifndef SHIP_TRANSPORT_CREATOR_HPP_INCLUDED
#define SHIP_TRANSPORT_CREATOR_HPP_INCLUDED

#include "TransportCreatorInterface.hpp"
#include "TransportInterface.hpp"

class ShipTransportCreator: public TransportCreatorInterface {
public:
  TransportInterface* createTransport() const override;
};

#endif  // SHIP_TRANSPORT_CREATOR_HPP_INCLUDED
