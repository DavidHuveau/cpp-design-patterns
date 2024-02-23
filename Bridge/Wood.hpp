#ifndef WOOD_HPP_INCLUDED
#define WOOD_HPP_INCLUDED

#include "MaterialInterface.hpp"

class Wood : public MaterialInterface {
public:
  void applyMaterial() const override;
};

#endif  // WOOD_HPP_INCLUDED
