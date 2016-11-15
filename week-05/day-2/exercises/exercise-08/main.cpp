#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool copy_files(string file_name_1, string file_name_2);

int main() {
  // Write a function that copies a file to an other
  // It should take the filenames as parameters
  // It should return a boolean that shows if the copy was successful
  copy_files("third-exercise.txt", "valami.txt");

  return 0;
}

bool copy_files(string file_name_1, string file_name_2) {
  ifstream file_1(file_name_1);
  ofstream file_2(file_name_2);
  if (!file_1.is_open() || !file_2.is_open()) {
    cerr << "File to copy not found." << endl;
    return false;
  }
  string content;
  while (file_1 >> content) {
    file_2 << content << endl;
  }
  file_1.close();
  file_2.close();
  return true;
}
