#include <iostream>
#include <string>

using namespace std;

string change_x_to_y(string str, unsigned int n);

int main() {
  cout << change_x_to_y("xxxxx", 0);  // you always have to start from 0

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

  return 0;
}

string change_x_to_y(string str, unsigned int n) {
  if (n == str.size()) {
    return str;
  } else {
    if (str[n] == 'x') {
      str[n] = 'y';
      return change_x_to_y(str, n + 1);
    } else {
      return change_x_to_y(str, n + 1);
    }
  }
}
