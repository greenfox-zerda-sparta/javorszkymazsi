#include <iostream>
#include <string>
#include "Stack.h"
#include "ErrorHandling.h"

using namespace std;

int main() {
  try {
    Stack stack;
    stack.push(2);
    stack.push(2);
    stack.push(2);
    stack.push(2);
    stack.push(2);
    stack.push(2);
  } catch (int ex) {
    ErrorHandling error;
    cout << error.interpret_exception(ex) << endl;
  }

  try {
    Stack stack;
    stack.pop();
  } catch (int ex) {
    ErrorHandling error;
    cout << error.interpret_exception(ex) << endl;
  }
  return 0;
}



// Create a fixed size stack. The stack can contain only 5 elements.
// You can push on the stack and pop from the stack.
// Write the push and pop methods so, that each throws an integer value if there is an error.
// Like when the stack is empty or full. Just make sure those are different values.
// Write a method called string interpretException(int exception) that returns the error message string for the integer.
//
// Illustrate in the main function both when it works fine and when exceptions occur.
