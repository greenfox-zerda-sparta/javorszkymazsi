#include <string>
#include "Car.h"

using namespace std;

Car::Car(string type) {
  this->type = type;
  this->km = km;
}

double Car::run(int number) {
  return km += number;
}
