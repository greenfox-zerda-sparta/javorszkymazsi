#include <iostream>
#include <string>

using namespace std;

unsigned int add_digits_together(unsigned int n);

int main() {
  cout << add_digits_together(4587);
// Given a non-negative int n,
// return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
// while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

  return 0;
}

unsigned int add_digits_together(unsigned int n) {
  if (n == 0) {
    return n;
  } else {
    return n % 10 + add_digits_together(n / 10);
  }
}
