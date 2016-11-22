#include <iostream>
#include <string>

using namespace std;

string* split(string str, char c) throw (const char*);

unsigned int get_counter(string str, char c);

int main() {
  try {
    string str = "What a nice day";
    char c = 'a';
    string* p = split(str, c);
    for (unsigned int i = 0; i < get_counter(str, c); ++i) {
      cout << p[i] << endl;
    }
  } catch (const char* e) {
    cout << e << endl;
  }
  return 0;
}

string* split(string str, char c) throw (const char*) {
  int c_count = get_counter(str, c);
  if (c_count == 1) {
    throw "The character you\'ve specified isn\'t in the string.\n";
  }
  string* array = new string[c_count];
  int counter = 0;
  for (unsigned int i = 0; i < str.size(); ++i) {
    if (str[i] != c) {
      array[counter].push_back(str[i]);
    } else {
      ++counter;
    }
  }
  return array;
}

unsigned int get_counter(string str, char c) {
  unsigned int counter = 1;
    for (unsigned int i = 0; i < str.size(); ++i) {
      if (str[i] == c) {
        ++counter;
      }
    }
  return counter;
}



// Write a function that receives a string and a character.
// The function should return an array of strings.
// The function should split the string at the character it receives as the second argument.
// The character it uses to split should not be in any of the new strings.
// Example: split("What a nice day", ' ');
// Result: {"What", "a", "nice",  "day"}
// If the character is not in the string throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.
