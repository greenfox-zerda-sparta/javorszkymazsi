// Create a function like macro that takes one argument.
// If the argument is false, it should print out the following:
// The expression in the argument. And the file name and the line in the file.

#include <iostream>
#define print(a) if(!(a)) {std::cout << #a << " at line " << __LINE__ << " in " << __FILE__ << " file." << std::endl; for(;;);}

int main() {
  print(false);
  return 0;
}
