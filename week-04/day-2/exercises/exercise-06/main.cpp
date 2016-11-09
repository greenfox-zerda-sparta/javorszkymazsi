#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

int main() {
    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area
  Circle circle(3);
  cout << circle.get_circumference() << endl;
  cout << circle.get_area() << endl;
  return 0;
}
