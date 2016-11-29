#include "RandNumber.h"

RandNumber::RandNumber() {
  int a = rand() % 10;
  int b = rand() % 10;
  while (a == b) {
    b = rand() % 10;
  }
  int c = rand() % 10;
  while (a == c || b == c) {
    c = rand() % 10;
  }
  int d = rand() % 10;
  while (a == d || b == d || c == d) {
    d = rand() % 10;
  }
  std::stringstream aa, bb, cc, dd;
  aa << a;
  bb << b;
  cc << c;
  dd << d;
  std::string aaa, bbb, ccc, ddd;
  aa >> aaa;
  bb >> bbb;
  cc >> ccc;
  dd >> ddd;
  this->num = aaa + bbb + ccc + ddd;
  this->first = a;
  this->second = b;
  this->third = c;
  this->fourth = d;
}

std::string RandNumber::get_num() {
  return num;
}

RandNumber::~RandNumber() {

}
