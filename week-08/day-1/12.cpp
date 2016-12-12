// Take the function like macro from the previous exercise.
// Make it so, that it's defined like the way You wrote it
// when __DEBUG is defined.
// It's defined to be nothing otherwise.

#include <iostream>
#ifdef __DEBUG
#define print(a) if(!(a)) {std::cout << #a << " at line " << __LINE__ << " in " << __FILE__ << " file." << std::endl; for(;;);}
#endif

int main() {
  print(false);
  return 0;
}
