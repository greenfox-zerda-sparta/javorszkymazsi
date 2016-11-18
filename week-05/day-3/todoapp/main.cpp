#include <iostream>
#include "TaskHandler.h"

using namespace std;

void show_usage(string name);

int main(int argc, char* argv[]) {
  TaskHandler task_handler;
  char l[] = "-l";
  char a[] = "-a";
  char r[] = "-r";

  // ./todo
  if (argc == 1) {
    show_usage(argv[0]);
  }

  // ./todo -l, -a
  if (argc == 2 && argv[1][1] == l[1]) {
    cout << task_handler.list_todos();
  } else if (argc == 2 && argv[1][1] == a[1]) {
    cerr << "Unable to add: No task is provided" << endl;
  }

  // ./todo -a, -r
  if (argc == 3 && argv[1][1] == a[1]) {
    Task new_task(argv[2]);
    task_handler.read_file();
    task_handler.add_new_task(new_task);
    //cout << list.print_content();
  } else if (argc == 3 && argv[1][1] == r[1]) {
    //int remove_task = atoi(argv[2]);
    //list.remove_task(remove_task);
    //cout << list.print_content();
  }
  return 0;
}

void show_usage(string name) {
  cout << "CLI Todo application" << endl
       << "====================" << endl
       << endl
       << "Command line arguments:" << endl
       << "-l  Lists all the tasks" << endl
       << "-a  Adds a new task" << endl
       << "-r  Removes a task" << endl
       << "-c  Completes a task" << endl;
}
