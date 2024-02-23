#ifndef FURNITURE_INTERFACE_HPP_INCLUDED
#define FURNITURE_INTERFACE_HPP_INCLUDED

#include "MaterialInterface.hpp"

class Furniture {
protected:
  MaterialInterface* m_material;

public:
  Furniture(MaterialInterface* material);
  virtual void produce() const = 0;
};

#endif  // FURNITURE_INTERFACE_HPP_INCLUDED
