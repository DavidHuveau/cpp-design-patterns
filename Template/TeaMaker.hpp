#ifndef TEA_MAKER_HPP_INCLUDED
#define TEA_MAKER_HPP_INCLUDED

#include "BeverageMaker.hpp"

class TeaMaker : public BeverageMaker {
public:
  void brew() override;
  void addCondiments() override;
};

#endif  // TEA_MAKER_HPP_INCLUDED
