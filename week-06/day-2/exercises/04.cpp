#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string split(string str, unsigned int a) throw (const char*);

int main() {
  try {
    cout << split("Rebarbara", 1) << endl;
    cout << split("Done", 4) << endl;
  } catch (const char* e) {
    cout << e << endl;
  }

  return 0;
}

string split(string str, unsigned int a) throw (const char*) {
  if (str.size() < a + 1) {
    throw "Requested index is out of bound.";
  }
  string str_1, str_2;
  for (unsigned int i = 0; i < a; ++i) {
    str_1.push_back(str[i]);
  }
  for (unsigned int i = a; i < str.size(); ++i) {
    str_2.push_back(str[i]);
  }
  return str_1 + "\n" + str_2;
}

// Write a function that receives a string and an unsigned integer.
// The function should return an array of strings, with two string in it.
// The first string should be the first part of the original string
// Characters in range [0,index-1].
// The second part should be the rest of the string characters range [index,length-1]
// Example: split("Rebarbara", 2)
// Result: {"Re", "barbara"}
// If the index is out of bounds, throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.
