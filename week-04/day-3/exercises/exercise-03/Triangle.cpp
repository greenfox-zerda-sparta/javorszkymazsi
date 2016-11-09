#include "Shape.h"
#include "Triangle.h"

Triangle::Triangle(double width, double height) {
  this->width = width;
  this->height = height;
}

string* Triangle::get_name() {
  return new string("Triangle");
}

double Triangle::get_area() {
  return this->area = this->width * this->height / 2;
}

Triangle::~Triangle() {

}
