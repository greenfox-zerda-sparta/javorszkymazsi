#include <iostream>
#include <string>

using namespace std;

class Shape {
  public:
    virtual string* get_name() {
      return new string("Generic Shape");
    }
    virtual ~Shape() {

    }
};

class Triangle : public Shape {
  public:
    virtual string* get_name() {
      return new string("Triangle");
    }
    virtual ~Triangle() {

    }
};

class Square : public Shape {
  public:
    virtual string* get_name() {
      return new string("Square");
    }
    virtual ~Square() {

    }
};

// Create 2 classes which inherit from the above defined class, Shape
// One should be Triangle, the other Square.
// Create their getName function based on the above example.
// Then watch what the code below does.
// If You find any typos, etc, correct them.

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
  delete shape;
  delete triangle;
  delete square;
  delete a;
  return 0;

}
