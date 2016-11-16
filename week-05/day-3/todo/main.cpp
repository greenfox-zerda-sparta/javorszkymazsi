#include <iostream>
#include <string>
#include <vector>

using namespace std;

void show_usage(string name);

int main(int argc, char* argv[]) {
  //ofstream todo_file("todo.txt");
  string arg_1 = argv[1];
  if (argc == 1) {
    show_usage(argv[0]);
  } else if (arg_1 == "-l") {
    cout << "listázz, köcsög!" << endl;
  } else if (arg_1 == "-a") {
    cout << "adj hozzá valamit" << endl;
  } else if (arg_1 == "-r"){
    cout << "törlünk valamit" << endl;
  } else if (arg_1 == "-c") {
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
