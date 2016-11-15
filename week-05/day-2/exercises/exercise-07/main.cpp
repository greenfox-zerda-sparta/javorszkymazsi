#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void add_string_to_file(string file_name, string string_to_add);

int main() {
  // Write a function that writes a string to a file
  // It should take the filename and the content as a string parameter
  add_string_to_file("fifth-exercise.txt", "Dorothy");
  return 0;
}

void add_string_to_file(string file_name, string string_to_add) {
  ofstream file(file_name);
  file << string_to_add << endl;
  file.close();
}
