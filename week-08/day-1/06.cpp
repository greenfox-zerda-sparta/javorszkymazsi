// In Your main function create an array of integers. 5 long.
// Fill it up with random numbers.
// For each number treat it as the radius of a circle.
// Calculate the circumference and the area of the circle with such a radius.
// Use preprocessor to define the MY_PI constant. Use this in th calculations.
#include <iostream>
#define MY_PI 3.14

float calculate_circumference(float radius) {
  return 2 * radius * MY_PI;
}

float calculate_area(float radius) {
  return radius * radius * MY_PI;
}

int main() {
  float array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  for (unsigned int i = 0; i < 5; ++i) {
    std::cout << "The circumference of a circle with a radius of " << array[i] << " is " << calculate_circumference(array[i]) << "." << std::endl;
  }
  for (unsigned int i = 0; i < 5; ++i) {
    std::cout << "The area of a circle with a radius of " << array[i] << " is " << calculate_area(array[i]) << "." << std::endl;
  }
  return 0;
}
