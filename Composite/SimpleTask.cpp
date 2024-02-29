#include "SimpleTask.hpp"

#include <iostream>

using namespace std;

SimpleTask::SimpleTask(string title) : TaskInterface(title) {
};

void SimpleTask::display() const {
  cout << "Simple Task: " << m_title << endl;
};
