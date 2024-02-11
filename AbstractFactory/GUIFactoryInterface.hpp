#ifndef GUIFACTORY_INTERFACE_HPP_INCLUDED
#define GUIFACTORY_INTERFACE_HPP_INCLUDED

#include "ButtonInterface.hpp"
#include "CheckboxInterface.hpp"

class GUIFactoryInterface {
public:
  virtual ButtonInterface*   createButton() const   = 0;
  virtual CheckboxInterface* createCheckbox() const = 0;
};

#endif  // GUIFACTORY_INTERFACE_HPP_INCLUDED
