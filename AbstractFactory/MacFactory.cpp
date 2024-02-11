#include "MacFactory.hpp"
#include "ButtonInterface.hpp"
#include "CheckboxInterface.hpp"
#include "MacButton.hpp"
#include "MacCheckbox.hpp"

ButtonInterface* MacFactory::createButton() const {
  return new MacButton();
};

CheckboxInterface* MacFactory::createCheckbox() const {
  return new MacCheckbox();
};
