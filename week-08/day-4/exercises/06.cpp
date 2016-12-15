#include <iostream>
#include <string>

using namespace std;

int calculate_how_many_floppy_ears(int bunny_count);

int main() {
  cout << calculate_how_many_floppy_ears(15);
// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or
// multiplication).

  return 0;
}

int calculate_how_many_floppy_ears(int bunny_count) {
  if (bunny_count == 0) {
    return bunny_count;
  } else if (bunny_count % 2 == 0) {
    return 3 + calculate_how_many_floppy_ears(bunny_count - 1);
  } else {
    return 2 + calculate_how_many_floppy_ears(bunny_count - 1);
  }
}
