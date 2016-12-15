#include <iostream>
#include <string>

using namespace std;

int find_n_fibonacci(int n);

int main() {
  cout << find_n_fibonacci(15);

// The fibonacci sequence is a famous bit of mathematics, and it happens to
// have a recursive definition. The first two values in the sequence are
// 0 and 1 (essentially 2 base cases). Each subsequent value is the sum of the
// previous two values, so the whole sequence is: 0, 1, 1, 2, 3, 5, 8, 13, 21
// and so on. Define a recursive fibonacci(n) method that returns the nth
// fibonacci number, with n=0 representing the start of the sequence.

  return 0;
}

int find_n_fibonacci(int n) {
  if (n == 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  } else {
    return find_n_fibonacci(n - 2) + find_n_fibonacci(n - 1);
  }
}
