#ifndef TRANSPORT_CREATOR_INTERFACE_HPP_INCLUDED
#define TRANSPORT_CREATOR_INTERFACE_HPP_INCLUDED

#include "TransportInterface.hpp"

class TransportCreatorInterface {
public:
  virtual TransportInterface* createTransport() const = 0;
};

#endif  // TRANSPORT_CREATOR_INTERFACE_HPP_INCLUDED
