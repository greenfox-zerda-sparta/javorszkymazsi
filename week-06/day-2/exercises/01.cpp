#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {
  try {
    throw 53;
  } catch (int a) {
    cout << a << endl;  //endl is just to make it pretty :)
  }
  return 0;
}
