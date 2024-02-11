#include "WinFactory.hpp"
#include "ButtonInterface.hpp"
#include "CheckboxInterface.hpp"
#include "WinButton.hpp"
#include "WinCheckbox.hpp"

ButtonInterface* WinFactory::createButton() const {
  return new WinButton();
};

CheckboxInterface* WinFactory::createCheckbox() const {
  return new WinCheckbox();
};
