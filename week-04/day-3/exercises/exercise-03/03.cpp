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
  Triangle* triangle = new Triangle(3, 4);
  Square* square = new Square(2);
  Shape* a;
  cout << "I am a " << *shape->get_name() << endl;
  cout << "I am a " << *triangle->get_name() << endl;
  cout << "I am a " << *square->get_name() << endl;
  cout << "The triangle\'s area is " << triangle->get_area() << "." << endl;
  cout << "The square\'s area is " << square->get_area() << "." << endl;

  a = square;
  cout << "I am a " << *a->get_name() << endl;
  cout << "The square\'s area is " << a->get_area() << "." << endl;

  a = triangle;
  cout << "I am a " << *a->get_name() << endl;
  cout << "The triangle\'s area is " << a->get_area() << "." << endl;



  return 0;

}
