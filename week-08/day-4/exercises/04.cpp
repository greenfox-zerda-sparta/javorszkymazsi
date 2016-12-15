#include <iostream>
#include <string>

using namespace std;

int calculate_base_on_power_n(int base, int n);

int main() {
  cout << calculate_base_on_power_n(3, 3);
// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

  return 0;
}

int calculate_base_on_power_n(int base, int n) {
  if (n == 0) {
    return base;
  } else {
    return base * calculate_base_on_power_n(base, n - 1);
  }
}
