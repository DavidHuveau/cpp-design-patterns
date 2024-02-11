#ifndef WIN_CHECKBOX_HPP_INCLUDED
#define WIN_CHECKBOX_HPP_INCLUDED

#include "CheckboxInterface.hpp"

class WinCheckbox : public CheckboxInterface {
public:
  void paint() const override;
};

#endif  // WIN_CHECKBOX_HPP_INCLUDED
