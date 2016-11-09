#include "Shape.h"
#include "Square.h"

Square::Square() {

}

string* Square::get_name() {
  return new string("Square");
}

Square::~Square() {

}
