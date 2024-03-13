#include "TurnOffCommand.hpp"

TurnOffCommand::TurnOffCommand(ElectronicDevice* device) : m_device(device) {
};

void TurnOffCommand::execute() const {
  m_device->turnOff();
};
