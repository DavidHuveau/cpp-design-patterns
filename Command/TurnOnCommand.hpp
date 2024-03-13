#ifndef TURN_ON_COMMAND_HPP_INCLUDED
#define TURN_ON_COMMAND_HPP_INCLUDED

#include "CommandInterface.hpp"
#include "ElectronicDevice.hpp"

// Concrete Command
class TurnOnCommand : public CommandInterface {
private:
  ElectronicDevice* m_device;

public:
  TurnOnCommand(ElectronicDevice* device);
  void execute() const;
};

#endif  // TURN_ON_COMMAND_HPP_INCLUDED
