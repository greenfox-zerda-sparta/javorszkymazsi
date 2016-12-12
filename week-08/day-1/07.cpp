// Create a function like macro, that get's one parameter.
// This macro should print out that paramter using cout.
// Illustrate that it works in Your main function.

#include <iostream>
#define print(x) {std::cout << #x << std::endl;}

int main() {
  print(valami);
  return 0;
}
