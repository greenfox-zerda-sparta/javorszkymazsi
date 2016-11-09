#include <string>
#include "Circle.h"

using namespace std;

Circle::Circle(double radius) {
  this->radius = radius;
}

double Circle::get_circumference() {
  return 2 * radius * 3.14;
}

double Circle::get_area() {
  return radius * radius * 3.14;
}
