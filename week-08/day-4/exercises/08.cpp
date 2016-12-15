#include <iostream>
#include <string>

using namespace std;

string remove_x(string str, unsigned int n);

int main() {
  cout << remove_x("xxxdfgdfx", 0);  // you always have to start from 0

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

  return 0;
}

string remove_x(string str, unsigned int n) {
  if (n == str.size()) {
    return str;
  } else {
    if (str[n] == 'x') {
      str.erase(str.begin() + n);
      return remove_x(str, n);
    } else {
      return remove_x(str, n + 1);
    }
  }
}
