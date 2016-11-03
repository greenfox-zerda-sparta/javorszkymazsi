#include <string>
#include <iostream>

using namespace std;

struct RectangularCuboid {
  double a;
  double b;
  double c;
};

double get_surface(RectangularCuboid& cub) {
  double surface = 2 * (cub.a * cub.b + cub.a * cub.c + cub.b * cub.c);
  return surface;
}

double get_volume(RectangularCuboid& cub) {
  double volume = cub.a * cub.b * cub.c;
  return volume;
}

// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

int main() {
  RectangularCuboid cuboid = {3, 4, 12.4};
  cout << "The surface of the cube is " << get_surface(cuboid) << ", ";
  cout << "and the volume of the cube is " << get_volume(cuboid) << "." << endl;
  return 0;
}
