#include "TaskHandler.h"

TaskHandler::TaskHandler() {
  this->todos = nullptr;
  this->todo_count = 0;
}

void TaskHandler::write_to_file() {
  std::ofstream todo_file("todo.txt");
  for (int i = 0; i < todo_count; ++i) {
    todo_file << todos[i]->get_todo() << "\n";
  }
  todo_file.close();
}

void TaskHandler::read_file() {
  std::ifstream input_file("todo.txt");
  std::string buffer;
  int line_count = 0;
  while (getline(input_file, buffer)) {
    ++line_count;
  }
  input_file.close();
  Task** temp = new Task*[line_count];
  input_file.open("todo.txt");
  for (int i = 0; i < line_count; ++i) {
    getline(input_file, buffer);
    std::cout << buffer;
    Task* temp_task = new Task(buffer);
    temp[i] = temp_task;
  }
  this->todo_count = line_count;
  std::cout << line_count;
  this->todos = temp;
  input_file.close();
}

void TaskHandler::add_new_task(Task& new_task) {
  ++todo_count;
  Task** temp = new Task*[todo_count];
  if (todos != nullptr) {
    for (int i = 0; i < todo_count - 1; ++i) {
      temp[i] = todos[i];
    }
  }
  temp[todo_count - 1] = &new_task;
  delete[] todos;
  todos = temp;
  write_to_file();
}

TaskHandler::~TaskHandler() {
  delete[] todos;
}
