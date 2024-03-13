#ifndef REMOTE_CONTROL_HPP_INCLUDED
#define REMOTE_CONTROL_HPP_INCLUDED

#include <vector>

#include "CommandInterface.hpp"

// Invoker
class RemoteControl {
private:
  std::vector<CommandInterface*> m_commands;

public:
  void addCommand(CommandInterface* cmd);
  void pressButton(int slot);
};

#endif  // REMOTE_CONTROL_HPP_INCLUDED
