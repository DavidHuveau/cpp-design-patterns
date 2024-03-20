#ifndef DISPLAY_HPP_INCLUDED
#define DISPLAY_HPP_INCLUDED

#include "ObserverInterface.hpp"

class Display : public ObserverInterface {
public:
  void update(float temperature, float humidity, float pressure);
};

#endif  // DISPLAY_HPP_INCLUDED
