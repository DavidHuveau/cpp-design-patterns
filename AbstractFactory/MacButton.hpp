#ifndef MAC_BUTTON_HPP_INCLUDED
#define MAC_BUTTON_HPP_INCLUDED

#include "ButtonInterface.hpp"

class MacButton : public ButtonInterface {
public:
  void paint() const override;
};

#endif  // MAC_BUTTON_HPP_INCLUDED
