#ifndef WIN_BUTTON_HPP_INCLUDED
#define WIN_BUTTON_HPP_INCLUDED

#include "ButtonInterface.hpp"

class WinButton : public ButtonInterface {
public:
  void paint() const override;
};

#endif  // WIN_BUTTON_HPP_INCLUDED
