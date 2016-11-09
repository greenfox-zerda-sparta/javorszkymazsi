#include "Shape.h"
#include "Square.h"

Square::Square(double side) {
  this->side = side;
}

string* Square::get_name() {
  return new string("Square");
}

double Square::get_area() {
  return this->area = this->side * this->side;
}

Square::~Square() {

}
