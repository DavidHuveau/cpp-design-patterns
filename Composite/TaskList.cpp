#include "TaskList.hpp"

#include <iostream>

using namespace std;

TaskList::TaskList(string title) : TaskInterface(title) {
};

void TaskList::addTask(TaskInterface* task) {
  m_tasks.push_back(task);
};

void TaskList::display() const {
  cout << "Task List: " << m_title << endl;
  for (short int i(0); i < m_tasks.size(); i++) {
    m_tasks[i]->display();
  }
};
