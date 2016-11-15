#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Create a program that decrypts the file called "duplicated-chars.txt",
  // and prints the decrypted text to the terminal window.
  ifstream input_file("duplicated-chars.txt");
  string word;
  while (input_file >> word) {
    cout << " ";
    for (int i = 0; i < word.length(); i += 2) {
      cout << word[i];
      if (word[i] == '.') {
        cout << endl;
      }
    }
  }
  input_file.close();
  return 0;
}
