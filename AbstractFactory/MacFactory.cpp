#include "MacFactory.hpp"
#include "MacButton.hpp"
#include "MacCheckbox.hpp"

ButtonInterface* MacFactory::createButton() const {
  return new MacButton();
};

CheckboxInterface* MacFactory::createCheckbox() const {
  return new MacCheckbox();
};
