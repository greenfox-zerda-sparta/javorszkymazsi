#include "Task.h"

Task::Task() {
  //std::ifstream file("todo.txt");

}

std::string Task::print_content() {
  std::ifstream file("todo.txt");
  std::string content = "";
  std::string buffer;
  int line_counter = 1;
  while (getline(file, buffer)) {
    std::stringstream ss;
    ss << line_counter;
    std::string str;
    ss >> str;
    content += str + " - " + buffer + "\n";
    ++line_counter;
  }
  if (content == "") {
    return "No todos for today!\n";
  }
  file.close();
  return content;
}

void Task::add_task(std::string new_task) {
  std::ofstream file("todo.txt", std::ios::app);
  file << new_task + "\n";
}

Task::~Task() {
  //file.close();
}
