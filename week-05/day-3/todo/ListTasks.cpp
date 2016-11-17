#include "ListTasks.h"

ListTasks::ListTasks() {

}

std::string ListTasks::print_content() {
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

ListTasks::~ListTasks() {

}
