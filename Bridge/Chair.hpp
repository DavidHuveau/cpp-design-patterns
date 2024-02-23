#ifndef CHAIR_HPP_INCLUDED
#define CHAIR_HPP_INCLUDED

#include "Furniture.hpp"

class Chair : public Furniture {
public:
  Chair(MaterialInterface* material);
  void produce() const override;
};

#endif  // CHAIR_HPP_INCLUDED
