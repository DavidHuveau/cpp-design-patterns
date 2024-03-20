#ifndef OBSERVER_INTERFACE_HPP_INCLUDED
#define OBSERVER_INTERFACE_HPP_INCLUDED

class ObserverInterface {
public:
  virtual void update(float temperature, float humidity, float pressure) = 0;
};

#endif  // OBSERVER_INTERFACE_HPP_INCLUDED
