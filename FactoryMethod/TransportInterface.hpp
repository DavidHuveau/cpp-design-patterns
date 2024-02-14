#ifndef TRANSPORT_INTERFACE_HPP_INCLUDED
#define TRANSPORT_INTERFACE_HPP_INCLUDED

class TransportInterface {
public:
  virtual void deliver() const = 0;
};

#endif  // TRANSPORT_INTERFACE_HPP_INCLUDED
