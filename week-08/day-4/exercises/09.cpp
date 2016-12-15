#include <iostream>
#include <string>

using namespace std;

string put_asterisk_between_characters(string str, int n);

int main() {
  cout << put_asterisk_between_characters("dunnnnooo", 1);      //always make n 1
// Given a string, compute recursively a new string where all the
// adjacent chars are now separated by a "*".

  return 0;
}

string put_asterisk_between_characters(string str, int n) {
  if (n == str.size()) {
    return str;
  } else {
    str.insert(str.begin() + n, '*');
    return put_asterisk_between_characters(str, n + 2);
  }
}
