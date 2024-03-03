#ifndef CAR_HPP_INCLUDED
#define CAR_HPP_INCLUDED

#include "Engine.hpp"
#include "Lights.hpp"

class Car {
private:
  Engine m_engine;
  Lights m_lights;

public:
  void start() const;
  void stop() const;
};

#endif  // CAR_HPP_INCLUDED
