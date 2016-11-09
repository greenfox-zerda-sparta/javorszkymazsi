#include "Shape.h"

Shape::Shape() {

}

string* Shape::get_name() {
  return new string("Generic Shape");
}

Shape::~Shape() {

}
