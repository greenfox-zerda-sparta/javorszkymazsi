// Create a function like macro that takes an argumnet.
// It should print the the code of the argument and the value of the argument too.
// E.g.:
//
// #define FunctionLikeMacro(a) //here comes magic
// int Main() {
//  int a = 23;
//  FunctionLikeMacro(a);
//
// }
//
// Should have the output:
// Variable a = 23;
// Where both 'a' and '23' are set by teh macro.

#include <iostream>
#define do_stuff(a) {std::cout << "Variable " << #a << " = " << a << std::endl; for(;;);}

int main() {
  int a = 23;
  do_stuff(a);
  return 0;
}
