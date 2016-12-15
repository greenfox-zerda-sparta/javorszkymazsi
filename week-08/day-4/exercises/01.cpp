#include <iostream>
#include <string>

using namespace std;

void count_down_to_zero(unsigned int n);

int main() {
  count_down_to_zero(12);

// write a recursive function
// that takes one parameter: n
// and counts down from n
  return 0;
}

void count_down_to_zero(unsigned int n) {
  if (n == -1) {
    return;
  } else {
    cout << n << endl;
    count_down_to_zero(n - 1);
  }
}
