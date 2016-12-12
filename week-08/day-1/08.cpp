// Create a function like macro, that gets an expression as it's input.
// If the expression is false, it should print out some error message.

#include <iostream>
#define error(a) if(!(a)) {std::cout << "ERROR!!" << std::endl;}

int main() {
  error(false);
  return 0;
}
