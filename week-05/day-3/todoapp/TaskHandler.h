#include <iostream>
#include <fstream>
#include <sstream>
#include "Task.h"

#ifndef TASKHANDLER_H_
#define TASKHANDLER_H_

class TaskHandler {
public:
  TaskHandler();
  void write_to_file();
  void read_file();
  void add_new_task(Task& new_task);
  std::string list_todos();
  void remove_task(int task_number);
  virtual ~TaskHandler();
private:
  Task** todos;
  int todo_count;
};

#endif /* TASKHANDLER_H_ */
