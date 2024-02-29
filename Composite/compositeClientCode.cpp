#include "compositeClientCode.hpp"
#include "SimpleTask.hpp"
#include "TaskList.hpp"

void compositeClientCode() {
  SimpleTask* simpleTask1 = new SimpleTask("Complete Coding");
  SimpleTask* simpleTask2 = new SimpleTask("Write Documentation");
  TaskList* projectTasks = new TaskList("Project Tasks");
  projectTasks->addTask(simpleTask1);
  projectTasks->addTask(simpleTask2);

  // Nested task list
  TaskList* phase1Tasks = new TaskList("Phase 1 Tasks");
  phase1Tasks->addTask(new SimpleTask("Design"));
  phase1Tasks->addTask(new SimpleTask("Implementation"));
  projectTasks->addTask(phase1Tasks);

  projectTasks->display();
};
