#include "Shape.h"
#include "Triangle.h"

Triangle::Triangle() {

}

string* Triangle::get_name() {
  return new string("Triangle");
}

Triangle::~Triangle() {

}
