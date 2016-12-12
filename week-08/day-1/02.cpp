// Create a constatn using a prepocesor directive.
// Print it out to the console.
// Undefine it. And then redefine it with a new value.
// Print it out again.

#define CONSTANT_NUM 8
#include <iostream>
#undef CONSTANT_NUM
#define CONSTANT_NUM "oktarin"

int main() {
  std::cout << CONSTANT_NUM << std::endl;
  return 0;
}
