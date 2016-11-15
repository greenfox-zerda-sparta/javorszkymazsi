#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Create a program that decrypts the file called "reversed-lines.txt",
  // and pritns the decrypred text to the terminal window.
  ifstream input_file("reversed-lines.txt");
  string content;
  string new_content = "";
  while (getline(input_file, content)) {
    for (int i = content.length() - 1; i > -1; --i) {
      new_content = content[i];
      cout << new_content;
    }
    cout << endl;
  }
  input_file.close();
  return 0;
}
