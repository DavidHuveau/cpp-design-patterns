#include "TurnOnCommand.hpp"

TurnOnCommand::TurnOnCommand(ElectronicDevice* device) : m_device(device) {
};

void TurnOnCommand::execute() const {
  m_device->turnOn();
};
