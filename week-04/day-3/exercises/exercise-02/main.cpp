#include <iostream>
#include <string>
#include "Shape.h"
#include "Triangle.h"
#include "Square.h"

using namespace std;

// First, move the previous code to new hpp and cpp files for each class.
// Include them into this file.
// Make sure they include each other when needed.
// Make sure the code below still works.

int main() {
  Shape* shape = new Shape();
  Triangle* triangle = new Triangle();
  Square* square = new Square();
  Shape* a;
  cout << "I am a...  " << *shape->get_name() << endl;
  cout << "I am a...  " << *triangle->get_name() << endl;
  cout << "I am a...  " << *square->get_name() << endl;

  a = square;
  cout << "I am a...  " << *a->get_name() << endl;

  a = triangle;
  cout << "I am a...  " << *a->get_name() << endl;
  return 0;

}
