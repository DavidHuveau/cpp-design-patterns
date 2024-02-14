#ifndef WIN_FACTORY_HPP_INCLUDED
#define WIN_FACTORY_HPP_INCLUDED

#include "GUIFactoryInterface.hpp"

class WinFactory : public GUIFactoryInterface {
public:
  ButtonInterface*   createButton() const override;
  CheckboxInterface* createCheckbox() const override;
};

#endif  // WIN_FACTORY_HPP_INCLUDED
