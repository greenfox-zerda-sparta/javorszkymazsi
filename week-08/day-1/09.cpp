// Create a function like macro. The Macro should take one parameter and
// print out the parameter to the console after printing out in which file
// and at which line it has been called at.

#include <iostream>
#define print_where(something) {std::cout << "This thing is on line " << __LINE__ << " in file " << __FILE__ << "." << std::endl; for (;;);}

int main() {
  print_where(age);
  return 0;
}
