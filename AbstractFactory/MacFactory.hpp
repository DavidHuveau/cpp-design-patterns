#ifndef MAC_FACTORY_HPP_INCLUDED
#define MAC_FACTORY_HPP_INCLUDED

#include "GUIFactoryInterface.hpp"

class MacFactory : public GUIFactoryInterface {
public:
  ButtonInterface*   createButton() const override;
  CheckboxInterface* createCheckbox() const override;
};

#endif  // MAC_FACTORY_HPP_INCLUDED
