
#include "Task.h"

Task::Task(std::string todo) {
  this->todo = todo;
  this->done = false;
}

void Task::set_todo(std::string new_todo) {
  this->todo = new_todo;
}

std::string Task::get_todo() {
  return this->todo;
}

void Task::set_done(bool bl) {
  this->done = bl;
}

bool Task::get_done() {
  return this->done;
}

Task::~Task() {
  // TODO Auto-generated destructor stub
}
