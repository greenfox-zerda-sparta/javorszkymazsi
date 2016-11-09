#include "Shape.h"

Shape::Shape() {

}

string* Shape::get_name() {
  return new string("Generic Shape");
}

double Shape::get_area() {
  return area;
}

Shape::~Shape() {

}
