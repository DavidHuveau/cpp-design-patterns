#include "TaskInterface.hpp"

using namespace std;

TaskInterface::TaskInterface(string title) : m_title(title) {
};

string TaskInterface::getTitle(){
  return m_title;
};

void TaskInterface::setTitle(string title) {
  m_title = title;
};
