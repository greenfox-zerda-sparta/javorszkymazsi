//#include <iostream>
#include <string>
//#include <fstream>
#include <sstream>
#include "Task.h"

using namespace std;

void show_usage(string name);

int main(int argc, char* argv[]) {
  if (argc < 2) {
    show_usage(argv[0]);
    return 1;
  }

  string arg_1 = argv[1];
  string arg_2 = argv[2];
  if (argc == 2 && arg_1 == "-l") {
    Task list;
    cout << list.print_content() << endl;
  } else if (argc == 3 && arg_1 == "-a") {
    Task add;
    add.add_task(arg_2);
    cout << add.print_content() << endl;
  } else if (argc == 2 && arg_1 == "-r"){
    cout << "törlünk valamit" << endl;
  } else if (argc == 2 && arg_1 == "-c") {
    cout << "kész ez a task" << endl;
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
