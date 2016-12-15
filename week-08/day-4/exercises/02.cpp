#include <iostream>
#include <string>

using namespace std;

int add_numbers_from_one_to_n(int n);

int main() {
  cout << add_numbers_from_one_to_n(6);
// write a recursive function
// that takes one parameter: n
// and adds numbers from 1 to n

  return 0;
}

int add_numbers_from_one_to_n(int n) {
  if (n == 0) {
    return n;
  } else {
    return n + add_numbers_from_one_to_n(n - 1);
  }
}
