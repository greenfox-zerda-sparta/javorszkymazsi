#include <iostream>
#include <sstream>
#include <fstream>

#ifndef TASK_H_
#define TASK_H_

class Task {
public:
  Task();
  std::string print_content();
  void add_task(std::string new_task);
  virtual ~Task();
protected:
  //std::ifstream file;
};

#endif /* TASK_H_ */
