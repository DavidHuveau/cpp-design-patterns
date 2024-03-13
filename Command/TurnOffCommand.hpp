#ifndef TURN_OFF_COMMAND_HPP_INCLUDED
#define TURN_OFF_COMMAND_HPP_INCLUDED

#include "CommandInterface.hpp"
#include "ElectronicDevice.hpp"

// Concrete Command
class TurnOffCommand : public CommandInterface {
private:
  ElectronicDevice* m_device;

public:
  TurnOffCommand(ElectronicDevice* device);
  void execute() const;
};

#endif  // TURN_OFF_COMMAND_HPP_INCLUDED
