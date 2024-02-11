#include "abstractFactoryClientCode.hpp"
#include "GUIFactoryInterface.hpp"
#include "ButtonInterface.hpp"
#include "CheckboxInterface.hpp"

void abstractFactoryClientCode(GUIFactoryInterface& factory) {
  ButtonInterface* button = factory.createButton();
  CheckboxInterface* checkbox = factory.createCheckbox();

  button->paint();
  checkbox->paint();
};
