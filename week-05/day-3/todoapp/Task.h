#include <string>

#ifndef TASK_H_
#define TASK_H_

class Task {
public:
  Task(std::string todo);
  void set_todo(std::string new_todo);
  std::string get_todo();
  void set_done(bool bl);
  bool get_done();
  virtual ~Task();
private:
  std::string todo;
  bool done;
};

#endif /* TASK_H_ */
