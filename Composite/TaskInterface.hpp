#ifndef TASK_INTERFACE_HPP_INCLUDED
#define TASK_INTERFACE_HPP_INCLUDED

#include <string>

class TaskInterface {
protected:
  std::string m_title;

public:
  TaskInterface(std::string title);
  std::string  getTitle();
  void         setTitle(std::string title);
  virtual void display() const = 0;
};

#endif  // TASK_INTERFACE_HPP_INCLUDED
