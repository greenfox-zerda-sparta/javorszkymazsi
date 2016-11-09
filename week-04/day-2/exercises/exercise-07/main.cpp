#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

int main() {
    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parmeter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it
  Car Tesla("Tesla");
  cout << "This Tesla have run " << Tesla.run(32) << " kms." << endl;
  cout << "Now it\'s " << Tesla.run(134) << " kms.";

  return 0;
}
