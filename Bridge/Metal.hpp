#ifndef METAL_HPP_INCLUDED
#define METAL_HPP_INCLUDED

#include "MaterialInterface.hpp"

class Metal : public MaterialInterface {
public:
  void applyMaterial() const override;
};

#endif  // METAL_HPP_INCLUDED
