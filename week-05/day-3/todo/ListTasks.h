#include <iostream>
#include <sstream>
#include "Task.h"

#ifndef LISTTASKS_H_
#define LISTTASKS_H_

class ListTasks : public Task {
public:
  ListTasks();
  std::string print_content();
  virtual ~ListTasks();
};

#endif /* LISTTASKS_H_ */
