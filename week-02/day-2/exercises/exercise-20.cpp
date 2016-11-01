#include <iostream>
#include <string>

using namespace std;

int how_many(string str, char letter, int size) {
  int result = 0;
  for (int i = 0; i < size; i++) {
    if (str[i] == letter) {
      result += 1;
    }
  }
  return result;
}

int main() {
  string word = "makkoshotyka-also";
  int size = word.length();
  char letter = 'k';
  // Write a function that takes a string and a character, and counts how many
  // times the character occures in the string and it should return a number
  cout << word << " contains " << how_many(word, letter, size) << " " << letter << "-s.";


  return 0;
}
