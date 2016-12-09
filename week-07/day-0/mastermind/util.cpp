#include "util.h"

std::string load_file(std::string file_name) {
  std::ifstream input_file(file_name);
  std::string buffer;
  std::string output = "";
  while (getline(input_file, buffer)) {
    output += buffer + "\n";
  }
  input_file.close();
  return output;
}

void print_to_screen(std::string input) {
  std::cout << input << std::endl;
}
