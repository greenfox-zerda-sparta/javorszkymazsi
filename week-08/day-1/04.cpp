// Create a function like macro.
// It's job is to turn something written in code into a string.
// It should be called str(a).
// Try out the code below. See what happens!


#define str(x) #x
#include <iostream>

int main() {
  int a = 22;
  int b = 24;
  if (a > b) {
    std::cout << str(a) << std::endl;
  } else {
    std::cout << str(b) << std::endl;
  }
  return 0;
}
