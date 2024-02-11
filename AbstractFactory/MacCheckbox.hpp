#ifndef MAC_CHECKBOX_HPP_INCLUDED
#define MAC_CHECKBOX_HPP_INCLUDED

#include "CheckboxInterface.hpp"

class MacCheckbox : public CheckboxInterface {
public:
  void paint() const override;
};

#endif  // MAC_CHECKBOX_HPP_INCLUDED
