#ifndef SIMPLE_TASK_HPP_INCLUDED
#define SIMPLE_TASK_HPP_INCLUDED

#include "TaskInterface.hpp"

class SimpleTask : public TaskInterface {
public:
  SimpleTask(std::string title);
  void display() const override;
};

#endif  // SIMPLE_TASK_HPP_INCLUDED
