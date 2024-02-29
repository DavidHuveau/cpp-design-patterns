#ifndef TASL_LIST_HPP_INCLUDED
#define TASL_LIST_HPP_INCLUDED

#include <vector>

#include "TaskInterface.hpp"

class TaskList : public TaskInterface {
private:
  std::vector<TaskInterface*> m_tasks;

public:
  TaskList(std::string title);
  void addTask(TaskInterface* task);
  void display() const override;
};

#endif  // TASL_LIST_HPP_INCLUDED
