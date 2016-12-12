// Define a function like macro that prints out the parameter it gets,
// and adds this string before it "DEBUG: " if __DEBUG is defined.
// Otherwise adds "RELEASE: " before the string.
// Use try it out. Illustrate that it works.

#include <iostream>
#ifdef __DEBUG
#define print(x) {std::cout << "DEBUG: " << #x << std::endl; for (;;);}
#else
#define print(x) {std::cout << "RELEASE: " << #x << std::endl; for (;;);}

#endif

int main() {
  print(test);
  return 0;
}
