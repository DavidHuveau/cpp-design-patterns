#ifndef COMMAND_INTERFACE_HPP_INCLUDED
#define COMMAND_INTERFACE_HPP_INCLUDED

class CommandInterface {
public:
  virtual void execute() const = 0;
};

#endif  // COMMAND_INTERFACE_HPP_INCLUDED
