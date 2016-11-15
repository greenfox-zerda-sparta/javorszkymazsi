#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string read_file(string file_name);

int main() {
  // Write a function that reads the content of a file and returns it as a string
  // It should take the filename as a string parameter
  cout << read_file("third-exercise.txt");
  return 0;
}

string read_file(string file_name) {
  ifstream file(file_name);
  string file_content;
  string buffer;
  if (file.is_open()) {
    while (file >> buffer) {
      file_content += buffer + "\n";
    }
  } else {
    cerr << "You have no file to open";
  }
  file.close();
  return file_content;
}
