#include "RemoteControl.hpp"

void RemoteControl::addCommand(CommandInterface* cmd) {
  m_commands.push_back(cmd);
};

void RemoteControl::pressButton(int slot) {
  if (slot >= 0 && slot < m_commands.size()) {
    m_commands[slot]->execute();
  }
};
